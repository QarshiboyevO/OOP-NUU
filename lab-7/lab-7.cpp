//
// Created by Orifjon Qarshiboyev on 07/10/25.
//
#include <iostream>
#include <vector>
#include "person.h"
#include "Student.h"
#include "Teacher.h"
#include "TeacherAssistant.h"
#include "Course.h"
using namespace std;

int main() {
    Course oopCourse;
    oopCourse.setsetCourseTeacher("Dr. Smith", 40, 2001, "Object-Oriented Programming");
    //Create students students
    Student* s1 = new Student("Alice", 20, 1001, 3.8);
    Student* s2 = new Student("Bob", 22, 1002, 3.6);
    Student* s3 = new Student("Charlie", 21, 1003, 3.9);

    // Add students to the course
    oopCourse.addStudent(s1);
    oopCourse.addStudent(s2);
    oopCourse.addStudent(s3);


    // Display course details
    oopCourse.displayCourse();

    // Manual cleanup of aggregated students
    delete s1;
    delete s2;
    delete s3;


    return 0;
}