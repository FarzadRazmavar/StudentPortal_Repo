/*
***************************** C++ HEADER FILE ***********************************
                             ******************                                 *
**                                                                              *
*   @file       Course.h                                                        *
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
#ifndef __COURSE_H
#define __COURSE_H
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
#include <list>
#include <time.h>

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
class Grade;
class Course;
class TheoreticalCourse;
class PracticalCourse;
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
class Grade
{
    /*
     * Private feilds and  methods
     */
    private:

    Student** PtrStudent   = new Student*;
    int*      StudentGrade = new int;


    /*
     * Public feilds and methods
     */
    public:

    /* Grade class constructor */
    Grade (Student* ptrStudent, int grade);

    /* Grade class destructor */
    ~Grade ();

    /* Set the PtrStudent */
    void set_PtrStudent (Student* ptrStudent);

    /* Get the PtrStudent */
    Student* get_PtrStudent ();

    /* Set the student grade */
    void set_StudentGrade (int grade);

    /* Get the student grade */
    int get_StudentGrade ();
};


/*
*********************************************************************************
*   @fn         class Course                                                    *
*   ____                                                                        *
*   @par        Details                                                         *
*                                                                               *
*   more info:  This is an abstract class.                                      *
*********************************************************************************
*/
class Course
{
    /*
     * Private feilds and methods
     */
    private:

    string* PtrCourseName;
    int*    PtrCourseUnits;
    int*    PtrCourseCode;

    vector<Grade>* PtrVecStudentsTakeCourse;

    /* Add a new student to the list of this course */
    void takeNewStudent (Student* ptrStudent);

    /* Giveing a student grade */
    void giveStudentGrade (int studentNumber, int stuGrade);

    /* delete one of students form the students's vector */
    void deleteStudent (int studentNumber);


    /*
     * Public feilds and methods
     */
    public:
    /* This is pointer to a vector which contains the pointers to students
       who has taken this course.This vector is read only from outside */
    vector<Student*>* PtrVecStudentsTakeCourseReadOnly;

    /* Course class constructor with input parameters */
    Course (string courseName, int courseUnits, int courseCode);

    /* Course class destructor */
    ~Course ();

    /* Get the name of this course */
    string get_CourseName ();

    /* Get course unit */
    int get_CourseUnit ();

    /* Get course code */
    int get_CourseCode ();

    /* Get vector of all of students who has taken this course until now */
    vector<Student*>* get_VecOfStudents ();

    /* Give this course to the student who has requested to take it */
    void GetThisCourse (Student* ptrStudent);

    /* Take Final exam from all of students who have taken this course */
    void FinalExam ();

    /* This function removes a student from the list of this course */
    void RemoveStudent (int studentNumber);

    /* Give the result of exam to the student who has requested */
    int GetStudentResult (int studentNumber);

    /* Print the list of students who have taken this course */
    void PrintStudentsList ();

    /* Print the the plan and explanation of this course */
    virtual void PrintCoursePlan () = 0;
};


/*
*********************************************************************************
*   @fn         class TheoreticalCourse                                         *
*   ____                                                                        *
*   @par        Details                                                         *
*                                                                               *
*                                                                               *
*********************************************************************************
*/
class TheoreticalCourse : public Course
{
    /*
     * Private feilds and methods
     */
    private:

    string* CoursePlan = new string;

    /*
     * Public feilds and methods
     */
    public:

    /* TheoreticalCourse class constructor with input parameters */
    TheoreticalCourse (string courseName, int courseUnits, int courseCode, string coursePlan);

    /* TheoreticalCourse class destructor */
    ~TheoreticalCourse ();

    /* Print the the plan and explanation of this course */
    void PrintCoursePlan ();
};


/*
*********************************************************************************
*   @fn         class PracticalCourse                                           *
*   ____                                                                        *
*   @par        Details                                                         *
*                                                                               *
*                                                                               *
*********************************************************************************
*/
class PracticalCourse : public Course
{
    /*
     * Private feilds and methods
     */
    private:

    list <string>* Outline = new list <string>;

    /*
     * Public feilds and methods
     */
    public:

    /* PracticalCourse class constructor with input parameters */
    PracticalCourse (string courseName, int courseUnits, int courseCode, list <string>* ptrOutline);

    /* PracticalCourse class destructor */
    ~PracticalCourse ();

    /* Print the the plan and explanation of this course */
    void PrintCoursePlan ();

};

#endif
