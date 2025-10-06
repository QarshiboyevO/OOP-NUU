//
// Created by Orifjon Qarshiboyev on 06/10/25.
//

#ifndef OOP_NUU_ELECTRICCAR_H
#define OOP_NUU_ELECTRICCAR_H
#include "Car.h"
#include "Vehicle.h"
#include <iostream>
using namespace std;
class ElectricCar:public Car {
    private:
    int battaryrange;
    public:
    ElectricCar(string brand,int year,int doors,int batteryrange):Car(brand,year,doors){
        this->battaryrange = batteryrange;
    };
    void displayinfo() {
        Car::displayinfo();
        cout<<"Battery Range: "<<battaryrange<<" km"<<endl;
    }
    ~ElectricCar() {
        cout<<"Electric Car is Destroyed"<<endl;
    }
};

#endif //OOP_NUU_ELECTRICCAR_H