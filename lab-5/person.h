//
// Created by Orifjon Qarshiboyev on 23/09/25.
//

#ifndef OOP_NUU_PERSON_H
#define OOP_NUU_PERSON_H
#include <iostream>
using namespace std;
class person {
    private:
    std::string name;
protected:
    int age;
public:
    person() {
        name="N/A";
        age=0;
    }
    person(std::string name, int age) {
        this->name=name;
        this->age=age;
    }
    void set_name(std::string name) {
        this->name=name;
    }
    string get_name() {
        return name;
    }
    void set_age(int age) {
        this->age=age;
    }
    void Introduce() {
        std::cout<<"My name is "<<name<<" and I am "<<age<<" years old."<<endl;
    }
    void haveBirthday() {
        age=age+1;
        std::cout<<"Person has aged for 1 year"<<endl;
    }
    ~person() {
        std::cout<<"Destructor is called "<<endl;
    }
};


#endif //OOP_NUU_PERSON_H