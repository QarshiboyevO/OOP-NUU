//
// Created by Orifjon Qarshiboyev on 10/11/25.
//
#include <iostream>
#include "Account.h"
using namespace std;
int main() {
    Account a("Orifjon",500),b("Eshmat",300);
    a.display();
    cout<<a;
    b.display();
    Account c=a+b;
    c.display();
    CheckingAccount d("Ilhom",300,10);
    d.display();





    return 0;

}