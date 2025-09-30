//
// Created by Orifjon Qarshiboyev on 30/09/25.
//

#ifndef OOP_NUU_PERSON_H
#define OOP_NUU_PERSON_H
#include <iostream>
using namespace std;

class Person {
    private:
    int nationalID;
    protected:
    string name;
    int age;
    public:
    Person() {
        cout<<"default constructor of person is called\n"<<endl;
    }
    Person(string name, int age,int id) {
        this->name=name;
        this->age=age;
        nationalID=id;
        cout<<"person constructor is called\n"<<endl;
    }
    void set_name(string name) {
        this->name=name;
    }
    void set_age(int age) {
        this->age=age;
    }
    void set_id(int id) {
        nationalID=id;
    }
    void displayPerson() {
        cout<<"Name: " <<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"ID: "<<nationalID<<endl;
    }
    ~Person() {
        cout<<"Person destructor is called\n"<<endl;
    }

};

#endif //OOP_NUU_PERSON_H