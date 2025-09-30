//
// Created by Orifjon Qarshiboyev on 30/09/25.
//

#ifndef OOP_NUU_STUDENT_H
#define OOP_NUU_STUDENT_H
#include <iostream>
#include "person.h"
using namespace std;

class Student:virtual public Person {
  protected:
  float gpa;
  public:
  Student() {

    cout<<"Default constructor of Student is called"<<endl;
  };
  Student(string name,int age,int id,float gpa) {
    Person(name,age,id);
    this->gpa=gpa;
    cout<<"Student constructor is called"<<endl;
  };
  void set_gpa(float gpa) {
    this->gpa=gpa;
  };
  void displayStudent() {
    displayPerson();
    cout<<"GPA: "<<gpa<<endl;
  };
  ~Student() {
    cout<<"Student Destructor is called"<<endl;
  }
};
#endif //OOP_NUU_STUDENT_H