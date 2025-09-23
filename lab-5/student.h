//
// Created by Orifjon Qarshiboyev on 23/09/25.
//

#ifndef OOP_NUU_STUDENT_H
#define OOP_NUU_STUDENT_H
#include "person.h"
#include <iostream>
using namespace std;
class student:public person {
    private:
    string university;
    public:
    student() {
        person();
        university = "N/A";
    };

    student(string university,string name, int age) {
        set_name(name);
        set_age(age);
        this->university=university;
        cout<<"Student has been created"<<endl;
    };
    void study(){
        cout<<get_name()<<" is studying at "<<university<<endl;

    };
    void Introduce() {
        cout<<"Hi , I'm "<<get_name()<<", a "<<age<<"-years-old student at "<<university<<endl;
    };







};


#endif //OOP_NUU_STUDENT_H