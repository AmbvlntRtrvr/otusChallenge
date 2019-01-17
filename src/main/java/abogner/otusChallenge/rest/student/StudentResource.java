package abogner.otusChallenge.rest.student;

import abogner.otusChallenge.domain.student.Classes;
import abogner.otusChallenge.domain.student.Student;
import abogner.otusChallenge.domain.student.Student_Classes;
import abogner.otusChallenge.rest.student.dto.ClassGradeDTO;
import abogner.otusChallenge.rest.student.dto.StudentDTO;
import abogner.otusChallenge.rest.student.dto.StudentListDTO;
import com.google.gson.Gson;

import javax.ws.rs.*;
import javax.ws.rs.core.MediaType;
import java.io.IOException;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.URL;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

@Path("/students")
public class StudentResource {

    public static String DATABASE_URL = "https://gist.githubusercontent.com/edotus/bd63eefb9b4b1eacb641811f9a1a780d/raw/60e04520584f7a436917b0d5be2b6c18f039fadb/students_classes.json";

    /**
     * Searches for all students that contain the provided search string in their first or last name
     * @param searchTerm case-insensitive string to be searched for
     * @return a list of all students and their combined GPAs
     * @throws HTTP 400 error if null input
     */
    @GET
    @Path("/search/{term}")
    @Produces({MediaType.APPLICATION_JSON, MediaType.APPLICATION_XML})
    public StudentListDTO searchStudents(@PathParam("term") String searchTerm) {
        if (searchTerm == null) {
            throw new WebApplicationException(HttpURLConnection.HTTP_BAD_REQUEST);
        }

        searchTerm.trim();
        String term = null, firstTerm = null, lastTerm = null;
        if (searchTerm.contains(", ")) {
            String[] lastFirst = searchTerm.split(", ");
            lastTerm = lastFirst[0].toLowerCase();
            firstTerm = lastFirst[1].toLowerCase();
        } else if (searchTerm.contains(" ")) {
            String[] lastFirst = searchTerm.split(" ");
            lastTerm = lastFirst[1].toLowerCase();
            firstTerm = lastFirst[0].toLowerCase();
        } else {
            term = searchTerm.toLowerCase();
        }

        Student_Classes db = getDatabase();
        if (db == null) {
            return null;
        }

        List<StudentDTO> dtoList = new ArrayList<>();
        for (Student student : db.getStudents()) {
            if (term != null) {
                if (student.getFirst().toLowerCase().contains(term) || student.getLast().toLowerCase().contains(term)) {
                    dtoList.add(toStudentDto(student, db.getClasses(), false));
                }
            } else {
                if (student.getFirst().toLowerCase().contains(firstTerm) || student.getLast().toLowerCase().contains(lastTerm)) {
                    dtoList.add(toStudentDto(student, db.getClasses(), false));
                }
            }
        }

        StudentListDTO dto = new StudentListDTO();
        dto.setStudents(dtoList);
        return dto;
    }


    /**
     * Gets the details of the java.abogner.otusChallenge.rest.student with the exact first and last name provided.
     * @param lastName case-insensitive last name
     * @param firstName case-insensitive first name
     * @return the details of the java.abogner.otusChallenge.rest.student, including class list (with grades) and email
     * @throws HTTP 404 exception if no java.abogner.otusChallenge.rest.student matches the first and last name.
     */
    @GET
    @Path("/details/{lastName}/{firstName}")
    @Produces({MediaType.APPLICATION_JSON, MediaType.APPLICATION_XML})
    public StudentDTO getDetails(@PathParam("lastName") String lastName, @PathParam("firstName") String firstName) {
        Student_Classes db = getDatabase();

        for (Student student : db.getStudents()) {
            if (student.getLast().toLowerCase().equals(lastName.toLowerCase())
                    && student.getFirst().toLowerCase().equals(firstName.toLowerCase())) {
                return toStudentDto(student, db.getClasses(), true);
            }
        }
        throw new WebApplicationException(HttpURLConnection.HTTP_NOT_FOUND);
    }


    /**
     * Converts a Student object from the JSON database into a Student DTO
     * @param student java.abogner.otusChallenge.rest.student to be translated
     * @param classList list of classes by ID
     * @param details true if detailed java.abogner.otusChallenge.rest.student info should be added, false if just firstName, lastName, and GPA
     * @return a StudentDTO object representation of the Student
     */
    private StudentDTO toStudentDto(Student student, Map<Integer, String> classList, boolean details) {
        StudentDTO dto = new StudentDTO();

        dto.setFirstName(student.getFirst());
        dto.setLastName(student.getLast());

        dto.setGrades(new ArrayList<>());
        double gradeTotal = 0;
        for (Classes aClass : student.getStudentClasses()) {
            gradeTotal += aClass.getGrade();
            if (details) {
                ClassGradeDTO cg = new ClassGradeDTO();
                cg.setClassName(classList.get(Integer.valueOf(aClass.getId())));
                cg.setGrade(aClass.getGrade());
                dto.getGrades().add(cg);
            }
        }

        // calculate GPA
        dto.setGpa(gradeTotal / (student.getStudentClasses().size()));

        if (details) {
            dto.setEmail(student.getEmail());
        }

        return dto;
    }


    /**
     * Get the JSON database located at the URL in the static variable above.
     * @return
     */
    private Student_Classes getDatabase() {
        URL url = null;
        try {
            url = new URL(DATABASE_URL);
        } catch (MalformedURLException e) {
            e.printStackTrace(); //Unable to retrieve database
            return null;
        }

        StringBuilder sb = new StringBuilder();
        try (
                Scanner scan = new Scanner(url.openStream());
        ) {
            while (scan.hasNextLine()) {
                sb.append(scan.nextLine());
            }
        } catch (IOException e) {
            return null;
        }

        Gson gson = new Gson();
        return gson.fromJson(sb.toString(), Student_Classes.class);
    }
}
