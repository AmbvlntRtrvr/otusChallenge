package abogner.otusChallenge.domain.student;

import java.util.List;

public class Student {
    String first;
    String last;
    String email;
    List<Classes> studentClasses;

    public String getFirst() {
        return first;
    }

    public void setFirst(String first) {
        this.first = first;
    }

    public String getLast() {
        return last;
    }

    public void setLast(String last) {
        this.last = last;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public List<Classes> getStudentClasses() {
        return studentClasses;
    }

    public void setStudentClasses(List<Classes> studentClasses) {
        this.studentClasses = studentClasses;
    }
}
