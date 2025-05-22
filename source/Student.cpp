/*
***************************** C++ SOURCE FILE ***********************************
                             ******************                                 *
**                                                                              *
*   @file       Student.cpp                                                     *
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
#include "Student.h"
/*
*********************************************************************************
*                                                                               *
*       DEFENITIONS AND MACROS                                                  *
*                                                                               *
*********************************************************************************
*/

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

/*
*********************************************************************************
*                                                                               *
*       PROTOTYPEDEFS OF LOCAL CLASSES AND NON-MEMBER FUNCTIONS                 *
*                                                                               *
*********************************************************************************
*/

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
*   @fn         class Student                                                   *
*   ____                                                                        *
*   @par        Details                                                         *
*                                                                               *
*                                                                               *
*********************************************************************************
*/

/*
################################################################################
# function name: Student(string firstName, string lastName, int studentNum)    #
# more info: This function is the constructor of class student.                #
################################################################################
*/
Student::Student (string firstName, string lastName, int studentNum)
{
    mPtrMyFirstName     = new string;
    mPtrMyLastName      = new string;
    mPtrMyStudentNumber = new int;

    mPtrMyCourses  = new vector<Course*>;
    PtrMyCoursesReadOnly = new vector<Course*>;

    *mPtrMyFirstName     = firstName;
    *mPtrMyLastName      = lastName;
    *mPtrMyStudentNumber = studentNum;
}
/*
################################################################################
#  function name: ~Student()                                                   #
#  more info: This function is the destructor of class student.                #
################################################################################
*/
Student::~Student ()
{
#if 0
    cout << "Object " << *mPtrMyFirstName << " removed !!!" << endl;
#endif

    delete mPtrMyFirstName;
    delete mPtrMyLastName;
    delete mPtrMyStudentNumber;
    delete mPtrMyCourses;
    delete PtrMyCoursesReadOnly;

    mPtrMyFirstName     = NULL;
    mPtrMyLastName      = NULL;
    mPtrMyStudentNumber = NULL;
    mPtrMyCourses       = NULL;
    PtrMyCoursesReadOnly = NULL;
}
/*
################################################################################
#  function name: get_StudentNumber()                                          #
#  more info: This function returns the student number.                        #
################################################################################
*/
int Student::get_StudentNumber ()
{
    return *mPtrMyStudentNumber;
}
/*
################################################################################
#  function name: get_StudentFirstName()                                       #
#  more info: This function returns the student's first name.                  #
################################################################################
*/
string Student::get_StudentFirstName ()
{
    return *mPtrMyFirstName;
}
/*
################################################################################
#  function name: get_StudentLastName()                                        #
#  more info: This function returns the student's last name.                   #
################################################################################
*/
string Student::get_StudentLastName ()
{
    return *mPtrMyLastName;
}
/*
################################################################################
#  function name: get_NumOfCourses ()                                          #
#  more info: This function returns the number of courses which the student    #
#  has taken.                                                                  #
################################################################################
*/
int Student::get_NumOfCourses ()
{
    return mPtrMyCourses->size();
}
/*
################################################################################
#  function name: get_MyCourse ()                                              #
#  more info: This function returns pointer of the course which the student    #
#  has taken.                                                                  #
################################################################################
*/
Course* Student::get_MyCourse (int index)
{
    return (*mPtrMyCourses)[index];
}
/*
################################################################################
#  function name: get_ListOfCourses ()                                         #
#  more info: This function returns pointer of a global vector which contains  #
#  all of courses which this student has taken until now.                      #
################################################################################
*/
vector<Course*>* Student::get_ListOfCourses ()
{
    PtrMyCoursesReadOnly->assign(mPtrMyCourses->begin(), mPtrMyCourses->end());
    return PtrMyCoursesReadOnly;
}
/*
################################################################################
#  function name: addNewCource                                                 #
#  more info: The Student can add a new course to its list by this function.   #
################################################################################
*/
void Student::mAddNewCourse (Course* ptrNewCourse)
{
    mPtrMyCourses->push_back (ptrNewCourse);
}
/*
################################################################################
#  function name: TakeThisCource                                               #
#  more info: The Student can take a new course by this function.              #
################################################################################
*/
void Student::TakeThisCource (Course* ptrNewCourse)
{
    this->mAddNewCourse(ptrNewCourse);
}
/*
################################################################################
#  function name: mRemoveCourse                                                 #
#  more info: The Student can remove a course from its list by this function.  #
################################################################################
*/
void Student::mRemoveCourse (Course* ptrCourse)
{
    bool flagMatchCourse = false;
    vector<Course*>::iterator courseIterator    = mPtrMyCourses->begin();
    vector<Course*>::iterator removedCourseIter = mPtrMyCourses->begin();

    for (auto courseIterator = mPtrMyCourses->begin(); courseIterator != mPtrMyCourses->end(); ++courseIterator)
    {

        if (*courseIterator == ptrCourse)
        {
            flagMatchCourse   = true;
            removedCourseIter = courseIterator;
        }
        else
        {
            /*Do nothing*/
        }
    }

    if (flagMatchCourse == true)
    {
        mPtrMyCourses->erase(removedCourseIter);
    }
    else
    {
        /*Do nothing*/
    }
}

/*
################################################################################
#  function name: DropThisCourse                                               #
#  more info: The Student can drop a course by this function.                  #
################################################################################
*/
void Student::DropThisCourse (Course* ptrCourse)
{
    this->mRemoveCourse (ptrCourse);
}
/*
################################################################################
#  function name: void PrintStudentInfo ()                                     #
#  more info: Print Student information.                                       #
################################################################################
*/
void Student::PrintStudentInfo ()
{
    string firstName     = this->get_StudentFirstName ();
    string lastName      = this->get_StudentLastName ();
    int    studentNumber = this->get_StudentNumber ();

    cout << "Student info:" << endl;
    cout << "First name: " << firstName << endl;
    cout << "Last name: " << lastName << endl;
    cout << "Student number: " << studentNumber << endl;
}
