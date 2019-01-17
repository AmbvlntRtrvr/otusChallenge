#import "enunciate-common.h"

@class OTUSCHALLENGENS0StudentListDTO;
@class OTUSCHALLENGENS0StudentDTO;
@class OTUSCHALLENGENS0ClassGradeDTO;

#ifndef DEF_OTUSCHALLENGENS0StudentListDTO_H
#define DEF_OTUSCHALLENGENS0StudentListDTO_H

/**
 * (no documentation provided)
 */
@interface OTUSCHALLENGENS0StudentListDTO : NSObject <EnunciateXML>
{
  @private
    NSArray *_students;
}

/**
 * (no documentation provided)
 */
- (NSArray *) students;

/**
 * (no documentation provided)
 */
- (void) setStudents: (NSArray *) newStudents;
@end /* interface OTUSCHALLENGENS0StudentListDTO */

#endif /* DEF_OTUSCHALLENGENS0StudentListDTO_H */
#ifndef DEF_OTUSCHALLENGENS0StudentDTO_H
#define DEF_OTUSCHALLENGENS0StudentDTO_H

/**
 * (no documentation provided)
 */
@interface OTUSCHALLENGENS0StudentDTO : NSObject <EnunciateXML>
{
  @private
    NSString *_firstName;
    NSString *_lastName;
    NSString *_email;
    double _gpa;
    NSArray *_grades;
}

/**
 * (no documentation provided)
 */
- (NSString *) firstName;

/**
 * (no documentation provided)
 */
- (void) setFirstName: (NSString *) newFirstName;

/**
 * (no documentation provided)
 */
- (NSString *) lastName;

/**
 * (no documentation provided)
 */
- (void) setLastName: (NSString *) newLastName;

/**
 * (no documentation provided)
 */
- (NSString *) email;

/**
 * (no documentation provided)
 */
- (void) setEmail: (NSString *) newEmail;

/**
 * (no documentation provided)
 */
- (double) gpa;

/**
 * (no documentation provided)
 */
- (void) setGpa: (double) newGpa;

/**
 * (no documentation provided)
 */
- (NSArray *) grades;

/**
 * (no documentation provided)
 */
- (void) setGrades: (NSArray *) newGrades;
@end /* interface OTUSCHALLENGENS0StudentDTO */

#endif /* DEF_OTUSCHALLENGENS0StudentDTO_H */
#ifndef DEF_OTUSCHALLENGENS0ClassGradeDTO_H
#define DEF_OTUSCHALLENGENS0ClassGradeDTO_H

/**
 * (no documentation provided)
 */
@interface OTUSCHALLENGENS0ClassGradeDTO : NSObject
{
  @private
    NSString *_className;
    double _grade;
}

/**
 * (no documentation provided)
 */
- (NSString *) className;

/**
 * (no documentation provided)
 */
- (void) setClassName: (NSString *) newClassName;

/**
 * (no documentation provided)
 */
- (double) grade;

/**
 * (no documentation provided)
 */
- (void) setGrade: (double) newGrade;
@end /* interface OTUSCHALLENGENS0ClassGradeDTO */

#endif /* DEF_OTUSCHALLENGENS0ClassGradeDTO_H */
