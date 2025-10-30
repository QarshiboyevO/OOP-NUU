//
// Created by Orifjon Qarshiboyev on 21/10/25.
//
#include <iostream>
#include "Distance.h"
using namespace std;

int main() {

    Distance d1(2, 75), d2(3, 50), d3;

    cout << "Initial Distances:\n";
    d1.show_data();
    d2.show_data();
    cout << "\nTesting + operator:\n";
    d3 = d1 + d2;
    d3.show_data();
    cout << "\nTesting - operator:\n";
    d3 = d1 - d2;
    d3.show_data();
    cout << "\nTesting * operator:\n";
    d3 = d1 * d2;
    d3.show_data();
    cout << "\nTesting prefix ++:\n";
    ++d1;
    d1.show_data();
    cout << "\nTesting postfix ++:\n";
    d1++;
    d1.show_data();
    cout << "\nTesting prefix --:\n";
    --d2;
    d2.show_data();
    cout << "\nTesting postfix --:\n";
    d2--;
    d2.show_data();
    cout << "\nTesting == operator:\n";
    if (d1 == d2)
        cout << "Equal distances\n";
    else
        cout << "Not equal\n";
    cout << "\nTesting +=, -=, *= operators:\n";
    d1 += d2;
    d1.show_data();
    d1 -= d2;
    d1.show_data();
    d1 *= d2;
    d1.show_data();

    return 0;

}