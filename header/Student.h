/*
***************************** C++ HEADER FILE ***********************************
                             ******************                                 *
**                                                                              *
*   @file       Student.h                                                       *
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
#ifndef __STUDENT_H
#define __STUDENT_H

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
*********************************************************************************
*                                                                               *
*      PROTOTYPEDEFS OF EXPORTED CLASSES AND NON-MEMBER FUNCTIONS               *
*                                                                               *
*********************************************************************************
*/
class Course;

/*
*********************************************************************************
*                                                                               *
*       PROTOTYPEDEFS OF LOCAL CLASSES AND NON-MEMBER FUNCTIONS                 *
*                                                                               *
*********************************************************************************
*/
class Student;

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
class Student
{
    /*
     * Private feilds and methods
     */
    private:

    string* mPtrMyFirstName;
    string* mPtrMyLastName;
    int*    mPtrMyStudentNumber;

    vector<Course*>* mPtrMyCourses;

    /* Add a new course to my course list */
    void mAddNewCourse (Course* ptrNewCourse);

    /* Remove one of a course from my course list */
    void mRemoveCourse (Course* ptrCourse);


    /*
     * Public feilds and methods
     */
    public:

    /* This is pointer to a vector which contains the courses of this student.
       This vector is read only from outside */
    vector<Course*>* PtrMyCoursesReadOnly;

    /* Student class constructor */
    Student (string firstName, string lastName, int studentNum);

    /* Student class destructor */
    ~Student ();

    /* student number getter */
    int get_StudentNumber ();

    /* Student's first name getter */
    string get_StudentFirstName ();

    /* Student's last name getter */
    string get_StudentLastName ();

    /* Number of courses which the student has taken */
    int get_NumOfCourses ();

    /* Student course getter */
    Course* get_MyCourse (int index);

    /* get all of courses which this student has taken until now */
    vector<Course*>* get_ListOfCourses ();

    /* Print Student information */
    void PrintStudentInfo ();

    /* Take a new course */
    void TakeThisCource (Course* ptrCourse);

    /* Drop a course */
    void DropThisCourse (Course* ptrCourse);
};

#endif