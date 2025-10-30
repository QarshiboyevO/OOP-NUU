//
// Created by Orifjon Qarshiboyev on 21/10/25.
//

#ifndef OOP_NUU_DISTANCE_H
#define OOP_NUU_DISTANCE_H
#include <iostream>
using namespace std;
class Distance {
  int meter;
  double centimeter;
public:
  Distance() {
    meter = 0;
    centimeter = 0;
  }
  Distance(int m, double c) {
    meter = m;
    centimeter = c;
  }
  void normalize() {
    while (centimeter>=100) {
      meter+=1;
      centimeter-=100;
    }
    while (centimeter<0) {
      meter-=1;
      centimeter+=100;
    }
  }
  void get_data() {
    cout<<"Enter meters:"<<endl;
    cin>>meter;
    cout<<"Enter cantimeters:"<<endl;
    cin>>centimeter;
    normalize();
  }
  void show_data() {
    normalize();
    cout<<"Meter:"<<meter<<endl;
    cout<<"Centimeter:"<<centimeter<<endl;

  }
  Distance operator++() {
    centimeter+=1;
    normalize();
    return *this;
  }
  Distance operator--() {
    centimeter-=1;
    normalize();
    return *this;
  }
  Distance operator++(int) {
    Distance temp=*this;
    centimeter++;
    normalize();
    return temp;
  }
  Distance operator--(int) {
    Distance temp=*this;
    centimeter--;
    normalize();
    return temp;
  }

  Distance operator+(const Distance d) const{
      Distance temp;
    temp.meter=meter+d.meter;
    temp.centimeter=centimeter+d.centimeter;
    temp.normalize();
    return temp;
  }
  Distance operator-(const Distance d)const {
    Distance temp;
    temp.meter=meter-d.meter;
    temp.centimeter=centimeter-d.centimeter;
    temp.normalize();
    return temp;
  }
  Distance operator*(const Distance d)const {
    double c1=meter*100+centimeter;
    double c2=d.meter*100+d.centimeter;
    double product = c1*c2;
    Distance temp;
    temp.meter=product/10000;
    temp.centimeter=product/100-temp.meter*100;
    temp.normalize();
    return temp;
  }
  bool operator==(const Distance d)const {
    return meter==d.meter and centimeter==d.centimeter;
  }
  Distance operator+=(const Distance d) {
    *this=*this+d;
    return *this;

  }
  Distance operator+=(int a) {
    centimeter=centimeter+a;
    normalize();
    return *this;
  }
  Distance operator-=(const Distance d) {
    *this=*this-d;
    return *this;

  }
  Distance operator-=(int a) {
    centimeter=centimeter-a;
    normalize();
    return *this;
  }
  Distance operator*=(const Distance d) {
    *this=*this*d;
    return *this;

  }
  Distance operator*=(int a) {
    double c1=meter*100+centimeter;
    double product = c1*a;
    Distance temp;
    temp.meter=product/10000;
    temp.centimeter=product/100-temp.meter*100;
    temp.normalize();
    return temp;
  }
};

#endif //OOP_NUU_DISTANCE_H