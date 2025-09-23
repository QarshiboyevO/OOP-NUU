//
// Created by Orifjon Qarshiboyev on 23/09/25.
//
#include <iostream>
#include "person.h"
#include "student.h"
using namespace std;
int main() {
    person p;
    person p1("Orifjon",20);
    p.Introduce();
    p1.Introduce();
    p1.haveBirthday();
    p1.haveBirthday();
    p1.Introduce();
    student s1;
    student s2("New Uzbekistan University","Orifjon",21);
    s1.Introduce();
    s2.Introduce();
    s1.study();
    s2.study();
    s2.Introduce();
    s1.haveBirthday();
    s1.person::Introduce();

    return 0;
}