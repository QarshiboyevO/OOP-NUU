//
// Created by Orifjon Qarshiboyev on 30/09/25.
//

#ifndef OOP_NUU_TEACHER_H
#define OOP_NUU_TEACHER_H
#include <iostream>
#include"person.h"
using namespace std;
class Teacher:virtual public Person {
    private:
    string subject;
    public:
    Teacher() {
      cout<<"Default constructor of Teacher is called"<<endl;
    };
    Teacher(string name,int age,int id,string subject) {
        Person(name,age,id);
        this->subject=subject;
        cout<<"Teacher constructor is called"<<endl;
    };
    void set_subject(string subject) {
        this->subject=subject;
    };
    void showRole() {
        cout<<"I am teacher, Subject: "<<subject<<endl;
    }
    void displayTeacher() {
        displayPerson();
        cout<<"Subject: "<<subject<<endl;
    }
    ~Teacher() {
        cout<<"Teacher Destructor is called"<<endl;
    };

};

#endif //OOP_NUU_TEACHER_H