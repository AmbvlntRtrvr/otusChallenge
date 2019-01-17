package abogner.otusChallenge.rest.student.dto;

import javax.xml.bind.annotation.XmlRootElement;
import java.io.Serializable;
import java.util.List;

@XmlRootElement(name = "studentList")
public class StudentListDTO implements Serializable {

    private List<StudentDTO> students;

    public StudentListDTO() {}

    public List<StudentDTO> getStudents() {
        return students;
    }

    public void setStudents(List<StudentDTO> students) {
        this.students = students;
    }
}
