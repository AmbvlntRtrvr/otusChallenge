package abogner.otusChallenge.rest.student.dto;

import javax.xml.bind.annotation.XmlRootElement;
import java.io.Serializable;
import java.util.List;

@XmlRootElement(name = "studentDetail")
public class StudentDTO  implements Serializable {
    String firstName;
    String lastName;
    String email;
    double gpa;
    List<ClassGradeDTO> grades;

    public StudentDTO() {}

    public String getFirstName() {
        return firstName;
    }

    public void setFirstName(String firstName) {
        this.firstName = firstName;
    }

    public String getLastName() {
        return lastName;
    }

    public void setLastName(String lastName) {
        this.lastName = lastName;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public double getGpa() {
        return gpa;
    }

    public void setGpa(double gpa) {
        this.gpa = gpa;
    }

    public List<ClassGradeDTO> getGrades() {
        return grades;
    }

    public void setGrades(List<ClassGradeDTO> grades) {
        this.grades = grades;
    }
}
