//
// Created by Orifjon Qarshiboyev on 07/10/25.
//

#ifndef OOP_NUU_COURSE_H
#define OOP_NUU_COURSE_H
#include <iostream>
#include "Teacher.h"
#include "person.h"
#include "Student.h"
using namespace std;
class Course {
    Teacher courseteacher;
    vector<Student *> students;
    public:
    Course() {
        cout<<"Course constructor is called\n";
    };
    ~Course() {
        cout<<"Course destructor is called\n Note: Aggregate students are NOT automatically deleted! \n";
    }
    void setsetCourseTeacher(string name,int age,int id,string subject) {
        courseteacher.set_name(name);
        courseteacher.set_age(age);
        courseteacher.set_id(id);
        courseteacher.set_subject(subject);
    }
    void addStudent(Student *student) {
        students.push_back(student);
    }
    void displayCourse() {
        courseteacher.displayTeacher();
        for (int i = 0; i < students.size(); i++) {
            cout<<"--------------------------\n";
            students[i]->displayStudent();
        }
    }

};
#endif //OOP_NUU_COURSE_H