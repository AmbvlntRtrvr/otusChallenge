package abogner.otusChallenge.rest.student;

import abogner.otusChallenge.rest.student.StudentResource;
import abogner.otusChallenge.rest.student.dto.ClassGradeDTO;
import abogner.otusChallenge.rest.student.dto.StudentDTO;
import abogner.otusChallenge.rest.student.dto.StudentListDTO;
import org.junit.Before;
import org.junit.Test;

import javax.ws.rs.WebApplicationException;

import java.util.HashMap;

import static org.junit.Assert.*;

public class StudentResourceTest {

    private StudentResource studentResource;

    @Before
    public void setUp() {
        studentResource = new StudentResource();
    }

    @Test
    public void searchStudentsEmpty() {
        StudentListDTO dto = studentResource.searchStudents("term");
        assertTrue(dto.getStudents().isEmpty());
    }

    @Test
    public void searchStudentsNull() {
        boolean thrown = false;
        try {
            studentResource.searchStudents(null);
        } catch (WebApplicationException e) {
            assertEquals(e.getResponse().getStatus(),400);
            thrown = true;
        }
        if (!thrown) {
            fail("No exception thrown");
        }
    }

    @Test
    public void searchStudentsEmptyInput() {
        //Should get all students
        StudentListDTO dto = studentResource.searchStudents("");
        assertTrue(dto.getStudents().size() == 13);
    }

    @Test
    public void searchStudentsSmith() {
        //Should get the 2 Smiths, Jane and John
        StudentListDTO dto = studentResource.searchStudents("Smith");
        assertTrue(dto.getStudents().size() == 2);

        boolean janeFound = false, johnFound = false;

        for (StudentDTO student : dto.getStudents()) {
            if (!student.getLastName().equals("Smith")) {
                fail("Got someone other than Jane or John Smith. Got " + student.getFirstName() + " " + student.getLastName());
            }
            if (student.getFirstName().equals("Jane")) {
                if (janeFound) {
                    fail("Found Jane twice");
                }
                janeFound = true;
            } else if (student.getFirstName().equals("John")) {
                if (johnFound) {
                    fail("Found John twice");
                }
                johnFound = true;
            } else {
                fail("Should have only gotten the 2 Smiths. Got " + student.getFirstName() + " " + student.getLastName());
            }
        }
    }

    @Test
    public void getDetailsNoStudent() {
        boolean thrown = false;
        try {
            studentResource.getDetails("No", "Student");
        } catch (WebApplicationException e) {
            assertEquals(e.getResponse().getStatus(), 404);
            thrown = true;
        }
        if (!thrown) {
            fail("No exception thrown");
        }
    }

    @Test
    public void getDetailsJohnSmith() {
        StudentDTO dto = studentResource.getDetails("Smith", "John");
        assertEquals(dto.getFirstName(), "John");
        assertEquals(dto.getLastName(),"Smith");
        assertEquals(dto.getEmail(), "johnsmith@mailinator.com");

        HashMap<String, Boolean> classMap = new HashMap<>();

        for (ClassGradeDTO grade : dto.getGrades()) {
            if (grade.getClassName().equals("Math 101")) {
                classMap.put(grade.getClassName(), true);
                assertTrue(grade.getGrade() == 4);
            } else if (grade.getClassName().equals("English 101")) {
                classMap.put(grade.getClassName(), true);
                assertTrue(grade.getGrade() == 3);
            } else if (grade.getClassName().equals("Science 101")) {
                classMap.put(grade.getClassName(), true);
                assertTrue(grade.getGrade() == 2);
            } else if (grade.getClassName().equals("Social Studies 101")) {
                classMap.put(grade.getClassName(), true);
                assertTrue(grade.getGrade() == 2.5);
            } else if (grade.getClassName().equals("Health 101")) {
                classMap.put(grade.getClassName(), true);
                assertTrue(grade.getGrade() == 3.5);
            } else if (grade.getClassName().equals("Chemistry 101")) {
                classMap.put(grade.getClassName(), true);
                assertTrue(grade.getGrade() == 4);
            }
        }

        assertTrue(dto.getGpa() == 3.1666666666666665);

        assertEquals(classMap.size(), 6);
    }


}