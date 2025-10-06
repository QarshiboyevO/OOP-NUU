//
// Created by Orifjon Qarshiboyev on 06/10/25.
//

#ifndef OOP_NUU_HW1_H
#define OOP_NUU_HW1_H
#include "Vehicle.h"
#include <iostream>
using namespace std;
class Car :public Vehicle {
    private:
    int doors;
    public:
    Car(string brand,int year,int doors):Vehicle(brand,year) {
        this->doors = doors;
    }
    void displayinfo() {
        Vehicle::displayinfo();
        cout<<"Doors: "<<doors<<endl;
    }
    ~Car() {
        cout<<"Car is destroyed"<<endl;
    }
};


#endif //OOP_NUU_HW1_H