/*
***************************** C++ SOURCE FILE ***********************************
                             ******************                                 *
**                                                                              *
*   @file       Course.cpp                                                      *
*                                                                               *
*   General Info                                                                *
*   ------------                                                                *
*                                                                               *
*   ____                                                                        *
*   @par        File info                                                       *
*   @li @b      Version                                                         *
*   @li @b      Data                                                            *
*                                                                               *
*   @par        Project info                                                    *
*   @li @b      Project             : StudentPortal                             *
*   @li @b      Processor           :                                           *
*   @li @b      Tool  @b            : Visual Stadio Code                        *
*   @li @b      Clock @b Freq       :                                           *
*                                                                               *
*   @copyright  (C) 2021 Farzad Razmavar. All rights reserved.                  *
*                                                                               *
*********************************************************************************
*   _______________
*   Version History
*   ---------------
*********************************************************************************
*   ____                                                                        *
*   @par        Rev 0.1.0                                                       *
*   @li @b      Data                :                                           *
*   @li @b      Author              : F.Razmavar                                *
*   @li @b      Approvedd @b by     :                                           *
*   @li @b      Description                                                     *
*                                                                               *
*               Revesion Tag :                                                  *
*                                                                               *
*********************************************************************************
*/


/*
*********************************************************************************
*                                                                               *
*       MODULES AND LIBRARIES USED                                              *
*                                                                               *
*********************************************************************************
*/
#include "Course.h"

using namespace std;

/*
*********************************************************************************
*                                                                               *
*       DEFENITIONS AND MACROS                                                  *
*                                                                               *
*********************************************************************************
*/
#define GRADE_MAX 100

/*
*********************************************************************************
*                                                                               *
*       TYPEDEFS AND STRUCTURES                                                 *
*                                                                               *
*********************************************************************************
*/


/*
*********************************************************************************
*                                                                               *
*      PROTOTYPEDEFS OF EXPORTED CLASSES AND NON-MEMBER FUNCTIONS               *
*                                                                               *
*********************************************************************************
*/
class Student;

/*
*********************************************************************************
*                                                                               *
*       PROTOTYPEDEFS OF LOCAL CLASSES AND NON-MEMBER FUNCTIONS                 *
*                                                                               *
*********************************************************************************
*/
class Course;
class Grade;
/*
*********************************************************************************
*                                                                               *
*       EXPORTED VARIABLED                                                      *
*                                                                               *
*********************************************************************************
*/


/*
*********************************************************************************
*                                                                               *
*       GLOBAL VARIABLES                                                        *
*                                                                               *
*********************************************************************************
*/

/*
*********************************************************************************
*   @fn         class Grade                                                     *
*   ____                                                                        *
*   @par        Details                                                         *
*                                                                               *
*                                                                               *
*********************************************************************************
*/
/*
################################################################################
# function name: Grade (Student* ptrStudent, int grade)                        #
# more info: This function is the constructor of class Grade.                  #
################################################################################
*/
Grade::Grade (Student* ptrStudent, int grade)
{
    *PtrStudent   = ptrStudent;
    *StudentGrade = grade;
}
/*
################################################################################
#  function name: ~Grade()                                                     #
#  more info: This function is the destructor of class Grade.                  #
################################################################################
*/
Grade::~Grade ()
{
    delete PtrStudent;
    delete StudentGrade;

    PtrStudent   = NULL;
    StudentGrade = NULL;
}
/*
################################################################################
#  function name: set_PtrStudent (Student* ptrStudent)                         #
#  more info: This function  sets the value of pointer to student of           #
#  classs Grade.                                                               #
################################################################################
*/
void Grade::set_PtrStudent (Student* ptrStudent)
{
    *PtrStudent = ptrStudent;
}
/*
################################################################################
#  function name:    get_PtrStudent ()                                         #
#  more info: This function returns the value of pointer to student of         #
#  classs Grade.                                                               #
################################################################################
*/
Student* Grade::get_PtrStudent ()
{
    return *PtrStudent;
}
/*
################################################################################
#  function name:   set_StudentGrade (int grade)                               #
#  more info: This function sets the value of student grade.                   #
################################################################################
*/
void Grade::set_StudentGrade (int grade)
{
    *StudentGrade = grade;
}
/*
################################################################################
#  function name:   get_StudentGrade ()                                        #
#  more info: This function returns the value of student grade.                #
################################################################################
*/
int Grade::get_StudentGrade ()
{
    return *StudentGrade;
}

/*
*********************************************************************************
*   @fn         class Course                                                    *
*   ____                                                                        *
*   @par        Details                                                         *
*                                                                               *
*                                                                               *
*********************************************************************************
*/
/*
################################################################################
# function name: Course(string courseName, courseUnits, courseCode)            #
# more info: This function is the constructor of class Course.                 #
################################################################################
*/
Course::Course (string courseName, int courseUnits, int courseCode)
{
    PtrCourseName  = new string;
    PtrCourseUnits = new int;
    PtrCourseCode  = new int;

    PtrVecStudentsTakeCourse         = new vector<Grade>;
    PtrVecStudentsTakeCourseReadOnly = new vector<Student*>;

    *PtrCourseName  = courseName;
    *PtrCourseUnits = courseUnits;
    *PtrCourseCode  = courseCode;
}

/*
################################################################################
#  function name: ~Course()                                                    #
#  more info: This function is the destructor of class Course.                 #
################################################################################
*/
Course::~Course ()
{
#if 0
    cout << "Object " << *PtrCourseName << " removed !!!" << endl;
#endif

    delete PtrVecStudentsTakeCourse;
    delete PtrVecStudentsTakeCourseReadOnly;
    delete PtrCourseName;
    delete PtrCourseUnits;
    delete PtrCourseCode;

    PtrVecStudentsTakeCourse         = NULL;
    PtrVecStudentsTakeCourseReadOnly = NULL;

    PtrCourseName  = NULL;
    PtrCourseUnits = NULL;
    PtrCourseCode  = NULL;
}

/*
################################################################################
#  function name: string get_CourseName ()                                     #
#  more info: Get the name of this course.                                     #
################################################################################
*/
string Course::get_CourseName ()
{
    return *PtrCourseName;
}

/*
################################################################################
#  function name: int get_CourseUnit ()                                        #
#  more info: Get course unit.                                                 #
################################################################################
*/
int Course::get_CourseUnit ()
{
    return *PtrCourseUnits;
}

/*
################################################################################
#  function name: int get_CourseCode ()                                        #
#  more info: Get course code.                                                 #
################################################################################
*/
int Course::get_CourseCode ()
{
    return *PtrCourseCode;
}

/*
################################################################################
#  function name: vector<Student*>* get_VecOfStudents ()                       #
#  more info: This function returns pointer of a global vector which contains  #
#  all of students who has taken this course until now.                        #
################################################################################
*/
vector<Student*>* Course::get_VecOfStudents ()
{
    vector<Grade>::iterator gradeItr = PtrVecStudentsTakeCourse->begin ();

    for (auto gradeItr = PtrVecStudentsTakeCourse->begin ();
         gradeItr != PtrVecStudentsTakeCourse->end ();
         ++gradeItr)
    {
        PtrVecStudentsTakeCourseReadOnly->push_back (gradeItr->get_PtrStudent ());
    }

    return PtrVecStudentsTakeCourseReadOnly;
}

/*
################################################################################
#  function name: takeNewStudent                                               #
#  more info: This function add a new student to the list of the course.       #
################################################################################
*/
void Course::takeNewStudent (Student* ptrStudent)
{
    this->PtrVecStudentsTakeCourse->push_back (Grade (ptrStudent, 0));
}

/*
################################################################################
#  function name: void giveStudentGrade (int studentNumber, int stuGrade)      #
#  more info: Object Course can gives a student grade by this function.        #
################################################################################
*/
void Course::giveStudentGrade (int studentNumber, int stuGrade)
{
    int stuNum = 0;
    vector<Grade>::iterator stuIterator = this->PtrVecStudentsTakeCourse->begin();

    for (auto stuIterator = this->PtrVecStudentsTakeCourse->begin();
         stuIterator     != this->PtrVecStudentsTakeCourse->end();
         ++stuIterator)
    {
        stuNum = (stuIterator->get_PtrStudent())->get_StudentNumber ();
        if (stuNum == studentNumber)
        {
            stuIterator->set_StudentGrade (stuGrade);
        }
        else
        {
           /* Do nothing */
        }

    }
}
/*
################################################################################
#  function name: void deleteStudent (int studentNumber)                       #
#  more info: This function deletes one of the students from                   #
#  the students's vector.                                                      #
################################################################################
*/
void Course::deleteStudent (int studentNumber)
{
    bool flagMatchCourse = false;
    int stuNum = 0;
    vector<Grade>::iterator stuIterator    = this->PtrVecStudentsTakeCourse->begin();
    vector<Grade>::iterator removedStuIter = this->PtrVecStudentsTakeCourse->begin();

    for (auto stuIterator = this->PtrVecStudentsTakeCourse->begin();
         stuIterator     != this->PtrVecStudentsTakeCourse->end();
         ++stuIterator)
    {
        stuNum = (stuIterator->get_PtrStudent())->get_StudentNumber ();
        if (stuNum == studentNumber)
        {
            flagMatchCourse   = true;
            removedStuIter = stuIterator;
        }
        else
        {
            /*Do nothing*/
        }
    }

    if (flagMatchCourse == true)
    {
        this->PtrVecStudentsTakeCourse->erase(removedStuIter);
    }
    else
    {
        /*Do nothing*/
    }
}
/*
################################################################################
#  function name: void GetThisCourse(Student* student)                         #
#  more info: This function gives this course to the student who               #
#  has requested to take it.                                                   #
################################################################################
*/
void Course::GetThisCourse(Student* ptrStudent)
{
    this->takeNewStudent (ptrStudent);
    ptrStudent->TakeThisCource (this);
}

/*
################################################################################
#  function name: void FinalExam ()                                            #
#  more info: Object Course will take the final exam from all of the students  #
#  who has taken this course.                                                  #
################################################################################
*/
void Course::FinalExam ()
{
    int stuNum = 0;
    int grade  = 0;
    srand ((unsigned) time(NULL));
    vector<Grade>::iterator stuIterator = this->PtrVecStudentsTakeCourse->begin();

    for (auto stuIterator = this->PtrVecStudentsTakeCourse->begin();
         stuIterator     != this->PtrVecStudentsTakeCourse->end();
         ++stuIterator)
    {
        stuNum = (stuIterator->get_PtrStudent())->get_StudentNumber ();
        grade  = (rand () % GRADE_MAX) + 1;
        this->giveStudentGrade (stuNum, grade);
    }
}
/*
################################################################################
#  function name: int GetStudentResult (int studentNumber)                     #
#  more info: Any student can see the result of his or her exam by calling     #
#  this function.                                                              #
################################################################################
*/
int Course::GetStudentResult (int studentNumber)
{
    int stuNum   = 0;
    int stuGrade = 0;
    vector<Grade>::iterator stuIterator = this->PtrVecStudentsTakeCourse->begin();

    for (auto stuIterator = this->PtrVecStudentsTakeCourse->begin();
         stuIterator     != this->PtrVecStudentsTakeCourse->end();
         ++stuIterator)
    {
        stuNum = (stuIterator->get_PtrStudent())->get_StudentNumber ();
        if (stuNum == studentNumber)
        {
            stuGrade = stuIterator->get_StudentGrade ();
        }
        else
        {
           /* Do nothing */
        }
    }
    return stuGrade;
}

/*
################################################################################
#  function name: void RemoveStudent (int studentNumber)                       #
#  more info: This function removes a student from the list of this course.    #
################################################################################
*/
void Course::RemoveStudent (int studentNumber)
{
    this->deleteStudent (studentNumber);
}

/*
################################################################################
#  function name: void PrintStudentsList ()                                    #
#  more info: This function prints the list of students who has taken this     #
#  course.                                                                     #
################################################################################
*/
void Course::PrintStudentsList ()
{
    cout << "List of students:" << endl;

    string studentFirstName = "";
    string studentLastName  = "";
    int    studentNumber    = 0;
    int    studentGrade     = 0;
    vector<Grade>::iterator stuIterator = this->PtrVecStudentsTakeCourse->begin();

    for (auto stuIterator = this->PtrVecStudentsTakeCourse->begin();
         stuIterator     != this->PtrVecStudentsTakeCourse->end();
         ++stuIterator)
    {
        studentFirstName = stuIterator->get_PtrStudent ()->get_StudentFirstName ();
        studentLastName  = stuIterator->get_PtrStudent ()->get_StudentLastName ();
        studentNumber    = stuIterator->get_PtrStudent ()->get_StudentNumber ();
        studentGrade     = stuIterator->get_StudentGrade ();

        cout << "Full name: "      << studentFirstName << " " << studentLastName << endl;
        cout << "Student number: " << studentNumber    << endl;
        cout << "Student grade: "  << studentGrade     << endl;
    }

}

/*
*********************************************************************************
*   @fn         class TheoreticalCourse                                         *
*   ____                                                                        *
*   @par        Details                                                         *
*                                                                               *
*                                                                               *
*********************************************************************************
*/
/*
################################################################################
# function name: TheoreticalCourse (string courseName, int courseUnits,        #
#                                   int courseCode, string coursePlan)         #
# more info: This function is the constructor of class TheoreticalCourse.      #
################################################################################
*/
TheoreticalCourse::TheoreticalCourse (string courseName,
                                      int    courseUnits,
                                      int    courseCode,
                                      string coursePlan) : Course (courseName,
                                                                   courseUnits,
                                                                   courseCode)
{
    *CoursePlan = coursePlan;
}

/*
################################################################################
#  function name: ~TheoreticalCourse()                                         #
#  more info: This function is the destructor of class TheoreticalCourse.      #
################################################################################
*/
TheoreticalCourse::~TheoreticalCourse ()
{
    delete CoursePlan;
    CoursePlan = NULL;
}

/*
################################################################################
#  function name: void PrintCoursePlan ()                                      #
#  more info: This function prints the the plan and explanation of this course #
################################################################################
*/
void TheoreticalCourse::PrintCoursePlan ()
{
    cout << "The plan of this course is " << *CoursePlan << endl;
}

/*
*********************************************************************************
*   @fn         class PracticalCourse                                           *
*   ____                                                                        *
*   @par        Details                                                         *
*                                                                               *
*                                                                               *
*********************************************************************************
*/
/*
################################################################################
# function name: PracticalCourse (string courseName, int courseUnits,          #
#                                   int courseCode, list <string> outline)     #
# more info: This function is the constructor of class PracticalCourse.        #
################################################################################
*/
PracticalCourse::PracticalCourse (string courseName,
                                  int    courseUnits,
                                  int    courseCode,
                                  list <string>* ptrOutline) : Course (courseName,
                                                                       courseUnits,
                                                                       courseCode)
{
    list <string>::iterator outlineIterator = ptrOutline->begin ();

    for (auto outlineIterator = ptrOutline->begin ();
         outlineIterator     != ptrOutline->end ();
         ++outlineIterator)
    {
        Outline->push_back (*outlineIterator);
    }
}

/*
################################################################################
#  function name: ~PracticalCourse()                                           #
#  more info: This function is the destructor of class PracticalCourse.        #
################################################################################
*/
PracticalCourse::~PracticalCourse ()
{
    delete Outline;
    Outline = NULL;
}

/*
################################################################################
#  function name: void PrintCoursePlan ()                                      #
#  more info: This function prints the the plan and explanation of this course #
################################################################################
*/
void PracticalCourse::PrintCoursePlan ()
{

}
