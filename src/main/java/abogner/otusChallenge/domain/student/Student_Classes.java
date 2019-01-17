package abogner.otusChallenge.domain.student;

import java.util.List;
import java.util.Map;

public class Student_Classes {

    List<Student> students;
    Map<Integer, String> classes;

    public List<Student> getStudents() {
        return students;
    }

    public void setStudents(List<Student> students) {
        this.students = students;
    }

    public Map<Integer, String> getClasses() {
        return classes;
    }

    public void setClasses(Map<Integer, String> classes) {
        this.classes = classes;
    }
}
