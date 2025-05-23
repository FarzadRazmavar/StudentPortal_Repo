/*
***************************** C++ SOURCE FILE ***********************************
                             ******************                                 *
**                                                                              *
*   @file       main.cpp                                                        *
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
#include "Course.h"
#include "UserInterface.h"

using namespace std;

/*
*********************************************************************************
*                                                                               *
*       GLOBAL FUNCTIONS                                                        *
*                                                                               *
*********************************************************************************
*/
/* Display the student's taken courses */
void ShowCourses(Student* ptrStudent);

/*
*********************************************************************************
*                                                                               *
*       GLOBAL VARIABLES                                                        *
*                                                                               *
*********************************************************************************
*/
/* Pointer to an object from class user interface */
UserInterface* PtrUserInterface = NULL;
/*
################################################################################
#  function name: showCourses                                                  #
#  more info: This function displays the courses which a student has taken.    #
################################################################################
*/
void showCourses(Student* ptrStudent)
{
    Course* ptrCourse;
    cout<< ptrStudent->get_StudentFirstName() << "'s " << "taken courses are:"<< endl;

    int index = 0;
    for(index = 0; index < ptrStudent->get_NumOfCourses(); index++)
    {
        ptrCourse = ptrStudent->get_MyCourse(index);
        cout<< ptrCourse->get_CourseName() << endl;
    }
    cout << endl;
}

/*
*********************************************************************************
*   @fn         function main                                                   *
*   ____                                                                        *
*   @par        Details                                                         *
*                                                                               *
*                                                                               *
*********************************************************************************
*/
int main()
{
    /*
     * Make an user interface object
     */
    system("clear");
    PtrUserInterface = UserInterface::get_Instance ();

    PtrUserInterface->mPrintMenu (IDLE_ST);
    system("clear");

    PtrUserInterface->mPrintMenu (*(PtrUserInterface->mPtrEnuMenuState));
    system("clear");

    PtrUserInterface->mPrintMenu (*(PtrUserInterface->mPtrEnuMenuState));
    system("clear");

    return 0;
}
