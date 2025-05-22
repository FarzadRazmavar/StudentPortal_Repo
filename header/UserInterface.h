/*
***************************** C++ HEADER FILE ***********************************
                             ******************                                 *
**                                                                              *
*   @file       UserInterface.h                                                 *
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
//#pragma once
#ifndef __USER_INTERFACE_H
#define __USER_INTERFACE_H

/*
*********************************************************************************
*                                                                               *
*       MODULES AND LIBRARIES USED                                              *
*                                                                               *
*********************************************************************************
*/
#include <iostream>
#include <string>
#include <vector>

#include "Course.h"
#include "Student.h"

using namespace std;

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
 *****************************************
 *  This enumeration is for identifying  *
 *  the state of menu for print.         *
 *****************************************
 */
typedef enum
{
    IDLE_ST,
    STUDENT_ST,
    SEARCH_STUDENT_ST,
    ADD_STUDENT_ST,
    REMOVE_STUDENT_ST,
    STUDENT_INFO_ST,
    COURSE_REGISTRATION_ST,
    REMOVE_COURSE_ST,
    COURSE_ST,
    REPORT_ST,
    EXIT
} enuMenuStateType;

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
class UserInterface;
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
*   @fn         class UserInterFace                                             *
*   ____                                                                        *
*   @par        Details                                                         *
*                                                                               *
*                                                                               *
*********************************************************************************
*/
class UserInterface
{
    /*
     * Private feilds and methods
     */
    public:

    /* The state of menu */
    enuMenuStateType* mPtrEnuMenuState;

    /* vector of all students pointer */
    vector<Student*>* mPtrStudentsVecPtr;

    /* vector of all courses pointer */
    vector<Course*>* mPtrCoursesVecPtr;

    /* This class can create only one object of itself (singleton class) */
    static UserInterface* UIF_Instance;


    /* UserInterFace class constructor */
    UserInterface ();

    /* Create an student */
    void mCreateStudent (string firstName, string lastName, int studentNum);

    /* Remove an student */
    void mRemoveStudent (int studentNum);

    /* Create a theoretical course */
    void mCreateCourse (string courseName, int courseUnits, int courseCode, string coursePlan);

    /* Create a practical course */
    void mCreateCourse (string courseName, int courseUnits, int courseCode, list <string>* ptrOutline);

    /* Remove a course */
    void mRemoveCourse (int courseCode);

    /* Search a student */
    Student* mSearchStudent (int stuNumber);

    /* print one line */
    void mPrintLine (char* ptrArrLine);

    /* This function converts a string input to enumeration */
    enuMenuStateType mConvertStrToEnu (string str);

    /* print the menu */
    void mPrintMenu (enuMenuStateType enustate);

    /*
     * Public feilds and methods
     */


    /* UserInterFace class destructor */
    ~UserInterface ();

    /* get instance from this class */
    static UserInterface* get_Instance ();

};

#endif
