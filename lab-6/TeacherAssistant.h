//
// Created by Orifjon Qarshiboyev on 30/09/25.
//

#ifndef OOP_NUU_TEACHERASSISTANT_H
#define OOP_NUU_TEACHERASSISTANT_H
#include <iostream>
#include "Teacher.h"
#include "Student.h"
#include "person.h"
#include "Student.h"
using namespace std;
class TeacherAssistant:public Student,public Teacher {
  private:
  int hoursperweek;
public:
  TeacherAssistant() {
    cout<<"Default Constructor of Teacher assistant is called"<<endl;
  };
  TeacherAssistant(string name,int age,int id,float gpa,string subject,int hours):Person(name,age,id),Student(name,age,id,gpa),Teacher(name,age,id,subject) {
    hoursperweek = hours;
    cout<<"Constructor of Teacher assistant is called"<<endl;
  }
  void SetTAinfo(int hours) {
    hoursperweek = hours;
  }
  void displayTA() {
    displayPerson();
    displayStudent();
    displayTeacher();
    cout<<"Working hours in a week: "<<hoursperweek<<endl;
  };
  ~TeacherAssistant() {
    cout<<"Destructor of Teacher assistant is called"<<endl;
  }


};
#endif //OOP_NUU_TEACHERASSISTANT_H