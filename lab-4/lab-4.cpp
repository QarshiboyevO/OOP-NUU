//
// Created by Orifjon Qarshiboyev on 16/09/25.
//
#include <iostream>
#include "Student.h"
using namespace std;
int main() {
    course Calculus("Calculus 1","1201",6);
    course Macroeconomics("Macroeconomics","1410",6);
    student Student1("Orifjon",230214,3.57,"Economics and Data Science",Calculus);
    Student1.display();
    student Student2;
    Student2.display();
    cout<<Student1.get_name()<<endl;;
    return 0;


}