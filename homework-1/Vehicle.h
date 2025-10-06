//
// Created by Orifjon Qarshiboyev on 06/10/25.
//

#ifndef OOP_NUU_VEHICLE_H
#define OOP_NUU_VEHICLE_H
#include <iostream>
using namespace std;

class Vehicle{
  private:
    string brand;
    int year;
    static int totalVehicles;
    public:
    Vehicle(string brand, int year) {
        this->brand=brand;
        this->year=year;
        totalVehicles++;
    };
    void displayinfo() {
        cout<<"Brand : "<<brand<<endl;
        cout<<"Year : "<<year<<endl;
    };
    int getTotalVechicles() {
        return totalVehicles;
    }
    ~Vehicle() {
        cout<<"Vehicle is destroyed"<<endl;
    }
};


#endif //OOP_NUU_VEHICLE_H