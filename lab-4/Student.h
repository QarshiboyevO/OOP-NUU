//
// Created by Orifjon Qarshiboyev on 16/09/25.
//

#ifndef OOP_NUU_STUDENT_H
#define OOP_NUU_STUDENT_H
#include <string>
#include <iostream>
#include "Course.h"

class student {
    private:
    std::string name;
    int id;
    double gpa;
    std::string department;
    course enrolledCourse;
public:
    student() {
        name="No Name";
        id=0;
        gpa=0.0;
        department="NA";
        enrolledCourse=course();
    };
    student(std::string name, int id, double gpa, std::string department, course enrolledCourse) {
        this->name=name;
        this->id=id;
        this->gpa=gpa;
        this->department=department;
        this->enrolledCourse=enrolledCourse;
    };
    void display() {
        std::cout << "Name: " << this->name << std::endl;
        std::cout << "ID: " << this->id << std::endl;
        std::cout << "GPA: " << this->gpa << std::endl;
        std::cout << "Department: " << this->department << std::endl;
        std::cout<<"Enrolled Courses:"<<endl;
        enrolledCourse.display();
    };
    string get_name() {
        return name;
    }
    void set_name(string name) {
        this->name=name;
    }
    int get_id() {
        return id;
    }
    void set_id(int id) {
        this->id=id;
    }
    double get_gpa() {
        return gpa;
    }
    void set_gpa(double gpa) {
        this->gpa=gpa;
    }
    std::string get_department() {
        return department;
    }
    void set_department(std::string department) {
        this->department=department;
    }


};

#endif //OOP_NUU_STUDENT_H