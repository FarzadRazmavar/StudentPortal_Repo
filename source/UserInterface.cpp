/*
***************************** C++ SOURCE FILE ***********************************
                             ******************                                 *
**                                                                              *
*   @file       UserInterFace.cpp                                               *
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


/*virtual********************************************************
*                                                                               *
*       MODULES AND LIBRARIES USED                                              *
*                                                                               *
*********************************************************************************
*/
#include "UserInterface.h"
/*
*********************************************************************************
*                                                                               *
*       DEFENITIONS AND MACROS                                                  *
*                                                                               *
*********************************************************************************
*/
#define MENU_LENGTH 32

/*
*********************************************************************************
*                                                                               *
*       TYPEDEFS AND STRUCTURES                                                 *
*                                                                               *
*********************************************************************************
*/
/*
 *****************************************
 *  This structure is contains the       *
 *  inputs of Student class constructor  *
 *****************************************
 */
typedef struct
{
    string firstName;
    string lastName;
    int    studentNumber;
} stuStudentInfoType;
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
 * Menu Idle
 */
static char ArrCharMenuIdleLine1 [MENU_LENGTH] = {
    '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*',
    'M', 'E', 'N', 'U', '*', '*', '*', '*', '*', '*', '*', '*', '*',
    '*', '*', '*', '*', '*'};

static char ArrCharMenuIdleLine2 [MENU_LENGTH] = {
    '*', '1', ')', ' ', 'S', 't', 'u', 'd', 'e', 'n', 't', 's', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', '*'};

static char ArrCharMenuIdleLine3 [MENU_LENGTH] = {
    '*', '2', ')', ' ', 'C', 'o', 'u', 'r', 's', 'e', 's', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', '*'};

static char ArrCharMenuIdleLine4 [MENU_LENGTH] = {
    '*', '3', ')', ' ', 'R', 'e', 'p', 'o', 'r', 't', 's', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', '*'};

static char ArrCharMenuIdleLine5 [MENU_LENGTH] = {
    '*', '4', ')', ' ', 'E', 'x', 'i', 't', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', '*'};

static char ArrCharMenuIdleLine6 [MENU_LENGTH] = {
    '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*',
    '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*',
    '*', '*', '*', '*', '*'};

static char ArrCharMenuIdleLine7 [MENU_LENGTH] = {
    ' ', ' ', ' ', ' ', ' ', ' ', 'E', 'n', 't', 'e', 'r', ' ', 'y',
    'o', 'u', 'r', ' ', 'c', 'h', 'o', 'i', 'c', 'e', ':', ' ', ' ',
    ' ', ' ', ' ', ' '};

/*
 * Menu Student
 */
static char ArrCharMenuStuLine1 [MENU_LENGTH] = {
    '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','M', 'E', 'N',
    'U', 'S', 'T', 'U', 'D', 'E', 'N', 'T', '*', '*','*', '*', '*',
    '*', '*','*', '*', '*'};

static char ArrCharMenuStuLine2 [MENU_LENGTH] = {
    '*', '1', '.', '1', ')', ' ', 'A', 'd', 'd', ' ', 'a', ' ', 's',
    't', 'u', 'd', 'e', 'n', 't', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', '*'};

static char ArrCharMenuStuLine3 [MENU_LENGTH] = {
    '*', '1', '.', '2', ')', ' ', 'S', 'e', 'a', 'r', 'c', 'h', ' ',
    'a', ' ', 's', 't', 'u', 'd', 'e', 'n', 't', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', '*'};

static char ArrCharMenuStuLine4 [MENU_LENGTH] = {
    '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*',
    '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*',
    '*', '*', '*', '*', '*'};

static char ArrCharMenuStuLine5 [MENU_LENGTH] = {
    ' ', ' ', ' ', ' ', ' ', ' ', 'E', 'n', 't', 'e', 'r', ' ', 'y',
    'o', 'u', 'r', ' ', 'c', 'h', 'o', 'i', 'c', 'e', ':', ' ', ' ',
    ' ', ' ', ' ', ' '};

/*
 * Menu add a student
 */
static char ArrCharMenuAddStuLine1 [MENU_LENGTH] = {
    '*', '*', '*', '*', '*', '*', '*','M', 'E', 'N', 'U', ' ', 'A',
    'D', 'D',' ', 'S', 'T', 'U', 'D', 'E', 'N', 'T', '*', '*','*',
    '*', '*', '*', '*', '*'};

static char ArrCharMenuAddStuLine2 [MENU_LENGTH] = {
    '*', '-', 'E', 'n', 't', 'e', 'r', ' ', 'f', 'i', 'r', 's', 't',
     ' ', 'n', 'a', 'm', 'e', ':', ' ', ' ', ' ', ' ', ' ', ' ',' ',
     ' ', ' ', ' ', ' ', ' ',};

static char ArrCharMenuAddStuLine3 [MENU_LENGTH] = {
    '*', '-', 'E', 'n', 't', 'e', 'r', ' ', 'l', 'a', 's', 't', ' ',
    'n', 'a', 'm', 'e', ':', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', };

static char ArrCharMenuAddStuLine4 [MENU_LENGTH] = {
    '*', '-', 'E', 'n', 't', 'e', 'r', ' ', 's', 't', 'u', 'd', 'e',
    'n', 't', ' ', 'n', 'u', 'm', 'b', 'e', 'r', ':', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ',};

static char ArrCharMenuAddStuLine5 [MENU_LENGTH] = {
    '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*',
    '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*',
    '*', '*', '*', '*', '*'};


/*
*********************************************************************************
*   @fn         class UserInterFace                                             *
*   ____                                                                        *
*   @par        Details                                                         *
*                                                                               *
*                                                                               *
*********************************************************************************
*/
/*
################################################################################
# feild name: UIF_Instance                                                     #
# more info: UserInterFace can create only one instance.                       #
################################################################################
*/
UserInterface* UserInterface::UIF_Instance = NULL;
/*
################################################################################
# function name: UserInterFace ()                                              #
# more info: This function is the constructor of class UserInterFace.          #
################################################################################
*/
UserInterface::UserInterface ()
{
    mPtrEnuMenuState   = new enuMenuStateType;
    mPtrStudentsVecPtr = new vector<Student*>;
    mPtrCoursesVecPtr  = new vector<Course*>;
}

/*
################################################################################
#  function name: ~UserInterFace()                                             #
#  more info: This function is the destructor of class UserInterFace.          #
################################################################################
*/
UserInterface::~UserInterface ()
{
    delete UIF_Instance;
    delete mPtrEnuMenuState;

    /*
     * Delete the students who are in vector of students
     */
    vector<Student*>::iterator stuIterator = mPtrStudentsVecPtr->begin();

    for (auto stuIterator = mPtrStudentsVecPtr->begin();
         stuIterator != mPtrStudentsVecPtr->end();
         ++stuIterator)
    {
        delete *stuIterator;
        *stuIterator = NULL;
    }

    /*
     * Delete the courses which are in vector of courses
     */
    vector<Course*>::iterator courseIterator = mPtrCoursesVecPtr->begin();

    for (auto courseIterator = mPtrCoursesVecPtr->begin();
         courseIterator != mPtrCoursesVecPtr->end();
         ++courseIterator)
    {
        delete *courseIterator;
        *courseIterator = NULL;
    }

    delete mPtrStudentsVecPtr;
    delete mPtrCoursesVecPtr;

    UIF_Instance      = NULL;
    mPtrEnuMenuState   = NULL;
    mPtrStudentsVecPtr = NULL;
    mPtrCoursesVecPtr  = NULL;
}

/*
################################################################################
#  function name: get_Instance()                                               #
#  more info: This function creates an instance of class UserInterface and     #
#  returns it. (singleton class)                                               #
################################################################################
*/
UserInterface* UserInterface::get_Instance ()
{
    if (UIF_Instance == NULL)
    {
        UIF_Instance = new UserInterface ();
    }
    else
    {
        /* Do nothing */
    }
    return UIF_Instance;
}

/*
################################################################################
#  function name: mCreateStudent (string firstName, string lastName,           #
#                                int studentNum)                               #
#  more info: This function creates an student object and add it to            #
#  vector of students.                                                         #
################################################################################
*/
void UserInterface::mCreateStudent (string firstName, string lastName, int studentNum)
{
    Student* ptrStudent = new Student (firstName, lastName, studentNum);
    this->mPtrStudentsVecPtr->push_back (ptrStudent);
}

/*
################################################################################
#  function name: void mRemoveStudent (int studentNum)                         #
#  more info: This function removes an student.                                #
################################################################################
*/
void UserInterface::mRemoveStudent (int studentNum)
{
    bool searchFinishedFlag = false;
    Student* ptrStudent = NULL;
    vector<Student*>::iterator stuIterator = mPtrStudentsVecPtr->begin();

    vector<Course*>* ptrVecStuCourses = NULL;

    /*
     * Search to find this student in the vector of students
     */
    for (auto stuIterator = mPtrStudentsVecPtr->begin();
         stuIterator != mPtrStudentsVecPtr->end() && searchFinishedFlag == false;
         ++stuIterator)
    {
        if ((*stuIterator)->get_StudentNumber() == studentNum)
        {
            searchFinishedFlag = true;
            ptrStudent = *stuIterator;

            /* Remove this student from the vector of students */
            mPtrStudentsVecPtr->erase (stuIterator);
        }
        else
        {
            /* Do nothing */
        }
    }

    ptrVecStuCourses = ptrStudent->get_ListOfCourses ();

    vector<Course*>::iterator courseIterator = ptrVecStuCourses->begin();

    /*
     * Remove this student from all of courses which he has taken.
     */
    for (auto courseIterator = ptrVecStuCourses->begin();
         courseIterator != ptrVecStuCourses->end();
         ++courseIterator)
    {
        (*courseIterator)->RemoveStudent (studentNum);
    }

    /* Delete this student's object */
    delete ptrStudent;
}

/*
################################################################################
#  function name: mCreateCourse (string courseName, int courseUnits,           #
#                               int courseCode, string coursePlan)             #
#  more info: This function creates theorical course object and add it to      #
#  vector of courses.                                                          #
################################################################################
*/
void UserInterface::mCreateCourse (string courseName, int courseUnits,
                                  int courseCode, string coursePlan)
{
    TheoreticalCourse* ptrCourse = new TheoreticalCourse (courseName, courseUnits,
                                                          courseCode, coursePlan);
    this->mPtrCoursesVecPtr->push_back (ptrCourse);
}

/*
################################################################################
#  function name: mCreateCourse (string courseName, int courseUnits,           #
#                               int courseCode, list <string>* ptrOutline)     #
#  more info: This function creates practical course object and add it to      #
#  vector of courses.                                                          #
################################################################################
*/
void UserInterface::mCreateCourse (string courseName, int courseUnits,
                                  int courseCode, list <string>* ptrOutline)
{
    PracticalCourse* ptrCourse = new PracticalCourse (courseName, courseUnits,
                                                      courseCode, ptrOutline);
    this->mPtrCoursesVecPtr->push_back (ptrCourse);
}
/*
################################################################################
#  function name: void mRemoveCourse (int courseCode)                          #
#  more info: This function removes a course.                                  #
################################################################################
*/
void UserInterface::mRemoveCourse (int courseCode)
{

    bool searchFinishedFlag = false;
    Course* ptrCourse = NULL;
    vector<Course*>::iterator courseIterator = mPtrCoursesVecPtr->begin();

    vector<Student*>* ptrVecStudentsOfThisCourse = NULL;

    /*
     * Search to find this course in the vector of courses
     */
    for (auto courseIterator = mPtrCoursesVecPtr->begin();
         courseIterator != mPtrCoursesVecPtr->end() && searchFinishedFlag == false;
         ++courseIterator)
    {
        if ((*courseIterator)->get_CourseCode () == courseCode)
        {
            searchFinishedFlag = true;
            ptrCourse = *courseIterator;

            /* Remove this course from the vector of courses */
            mPtrCoursesVecPtr->erase (courseIterator);
        }
        else
        {
            /* Do nothing */
        }
    }

    ptrVecStudentsOfThisCourse = ptrCourse->get_VecOfStudents ();

    vector<Student*>::iterator stuIterator = ptrVecStudentsOfThisCourse->begin();

    /*
     * Remove this course for all of students who he has taken it.
     */
    for (auto stuIterator = ptrVecStudentsOfThisCourse->begin();
         stuIterator != ptrVecStudentsOfThisCourse->end();
         ++stuIterator)
    {
        (*stuIterator)->DropThisCourse (ptrCourse);
    }

    /* Delete the object of this course */
    delete ptrCourse;
}

/*
################################################################################
#  function name: Student* mSearchStudent (int stuNumber)                       #
#  more info: This function searches to find a student.                        #
################################################################################
*/
Student* UserInterface::mSearchStudent (int stuNumber)
{
    Student* ptrStudent;
    vector<Student*>::iterator studentItr = mPtrStudentsVecPtr->begin ();

    for (studentItr = mPtrStudentsVecPtr->begin ();
         studentItr != mPtrStudentsVecPtr->end () &&
         ((*studentItr)->get_StudentNumber () != stuNumber);
         ++studentItr);

    if (studentItr != mPtrStudentsVecPtr->end ())
    {
        ptrStudent = *studentItr;
    }
    else
    {
        ptrStudent = nullptr;
    }

    return ptrStudent;
}

/*
################################################################################
#  function name:  void mPrintLine (char* ptrArrLine)                          #
#  more info: This function prints one line of a menu.                         #
################################################################################
*/
void UserInterface::mPrintLine (char* ptrArrLine)
{
    char index = 0;
    for (index = 0; index < MENU_LENGTH; index++)
    {
        cout << ptrArrLine[index];
    }
    cout << endl;
}

/*
################################################################################
#  function name:  enuMenuStateType mConvertStrToEnu (string str)              #
#  more info: This function converts string input to enumeration.              #
################################################################################
*/
enuMenuStateType UserInterface::mConvertStrToEnu (string str)
{
    enuMenuStateType enuState = EXIT;

    if (str == "Students")
    {
        enuState = STUDENT_ST;
    }
    else if (str == "Courses")
    {
        enuState = COURSE_ST;
    }
    else if (str == "Reports")
    {
        enuState = REPORT_ST;
    }
    else if (str == "Exit")
    {
        enuState = EXIT;
    }
    else if (str == "Add" || str == "Add a student" || str == "add a student")
    {
        enuState = ADD_STUDENT_ST;
    }
    else if (str == "Search a student" || str == "Search stu")
    {
        enuState = SEARCH_STUDENT_ST;
    }
    else if (str == "Student info" || str == "Student information")
    {
        enuState = STUDENT_INFO_ST;
    }
    else if (str == "Course registeration" || str == "Course reg")
    {
        enuState = COURSE_REGISTRATION_ST;
    }
    else if (str == "Remove" || str == "Remove a course")
    {
        enuState = REMOVE_COURSE_ST;
    }

    return enuState;
}

/*
################################################################################
#  function name: void mPrintMenu (enuMenuStateType enustate)                   #
#  more info: This function prints the menu.                                   #
################################################################################
*/
void UserInterface::mPrintMenu (enuMenuStateType enustate)
{
    string strInput;
    stuStudentInfoType stuStudentInfo;

    switch (enustate)
    {
        /*
         *****************************************
         *  print the menu of Idle state.        *
         *****************************************
         */
        case IDLE_ST:
        {
            /* print line 1 */
            mPrintLine (ArrCharMenuIdleLine1);

            /* print line 2 */
            mPrintLine (ArrCharMenuIdleLine2);

            /* print line 3 */
            mPrintLine (ArrCharMenuIdleLine3);

            /* print line 4 */
            mPrintLine (ArrCharMenuIdleLine4);

            /* print line 5 */
            mPrintLine (ArrCharMenuIdleLine5);

            /* print line 6 */
            mPrintLine (ArrCharMenuIdleLine6);

            /* print line 7 */
            mPrintLine (ArrCharMenuIdleLine7);

            /* Get user choice */
            cin >> strInput;

            *mPtrEnuMenuState = mConvertStrToEnu (strInput);
        }
        break;

        /*
         *****************************************
         *  print the menu of student state.     *
         *****************************************
         */
        case STUDENT_ST:
        {
            /* print line 1 */
            mPrintLine (ArrCharMenuStuLine1);

            /* print line 2 */
            mPrintLine (ArrCharMenuStuLine2);

            /* print line 3 */
            mPrintLine (ArrCharMenuStuLine3);

            /* print line 4 */
            mPrintLine (ArrCharMenuStuLine4);

            /* print line 5 */
            mPrintLine (ArrCharMenuStuLine5);

            /* Get user choice */
            cin >> strInput;

            *mPtrEnuMenuState = mConvertStrToEnu (strInput);
        }
        break;

        /*
         *****************************************
         *  print the menu of search student     *
         *  state.                               *
         *****************************************
         */
        case ADD_STUDENT_ST:
        {
            /* print line 1 */
            mPrintLine (ArrCharMenuAddStuLine1);

            /* print line 2 */
            mPrintLine (ArrCharMenuAddStuLine2);

            /* Get student first name */
            cin >> stuStudentInfo.firstName;

            /* print line 3 */
            mPrintLine (ArrCharMenuAddStuLine3);

            /* Get student last name */
            cin >> stuStudentInfo.lastName;

            /* print line 4 */
            mPrintLine (ArrCharMenuAddStuLine4);

            /* Get student number */
            cin >> stuStudentInfo.studentNumber;

            /* print line 5 */
            mPrintLine (ArrCharMenuAddStuLine5);

            /* create student */
            mCreateStudent (stuStudentInfo.firstName, stuStudentInfo.lastName, stuStudentInfo.studentNumber);

        }
        break;

        /*
         *****************************************
         *  Default state.                       *
         *****************************************
         */
        default:
        {
            /* Do nothing */
        }
        break;
    }
}
