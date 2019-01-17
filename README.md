# otusChallenge
abogner's Otus Challenge solution

# Maven build commands:
mvn jetty:run 
runs a Jetty server on port 9090

mvn install 
builds otusChallenge.war in the target directory. Also runs tests.

# Once service is running
If running through Jetty: http://localhost:9090/restapi
This contains all documentation and contracts for the services

Services run in the path "otus", so the services are located at:
http://localhost:9090/otus/students/search/{term}
http://localhost:9090/otus/students/details/{last}/{first}
