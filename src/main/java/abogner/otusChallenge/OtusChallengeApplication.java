package abogner.otusChallenge;

import abogner.otusChallenge.rest.student.StudentResource;

import javax.ws.rs.ApplicationPath;
import javax.ws.rs.core.Application;
import java.util.HashSet;
import java.util.Set;

@ApplicationPath("/otus")
public class OtusChallengeApplication extends Application {

    private Set<Object> singletons = new HashSet<Object>();

    public OtusChallengeApplication() {
        singletons.add(new StudentResource());
    }

    @Override
    public Set<Object> getSingletons() {
        return singletons;
    }
}
