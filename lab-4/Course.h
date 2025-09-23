//
// Created by Orifjon Qarshiboyev on 16/09/25.
//

#ifndef OOP_NUU_COURSE_H
#define OOP_NUU_COURSE_H
#include <string>
#include <iostream>
using namespace std;
class course {
    public:
    string title;
    string code;
    int credits;
    course() {
        title="Unknown";
        code="0000";
        credits=0;
    };
    course(string title,string code,int credits) {
        this->title=title;
        this->code=code;
        this->credits=credits;
    }
    void display() {
        cout<<"Title: "<<title<<endl;
        cout<<"Code: "<<code<<endl;
        cout<<"Credits: "<<credits<<endl;
    }
};
#endif //OOP_NUU_COURSE_H