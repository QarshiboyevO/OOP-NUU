
//
// Created by Orifjon Qarshiboyev on 28/10/25.
//
#include <iostream>
using namespace std;
class Time {
    int hours;
    int minutes;
public:
    Time() {
        hours = minutes = 0;
    }
    Time(int h,int m) {
        hours = h;
        minutes = m;
    };
    friend ostream& operator<<(ostream& out, Time t);
    friend istream& operator>>(istream& in, Time& t);
private:
    void normalize() {
        while (minutes >= 60) {
            minutes -= 60;
            hours += 1;
        }
        while (minutes <0) {
            minutes += 60;
            hours -= 1;
        }
    }
public:
    Time operator++() {
        minutes += 1;
        normalize();
        return *this;
    }
    Time operator--() {
        minutes -= 1;
        normalize();
        return *this;
    }
    Time operator++(int) {
        Time temp=*this;
        minutes += 1;
        normalize();
        return temp;
    }
    Time operator--(int) {
        Time temp=*this;
        minutes -= 1;
        normalize();
        return temp;
    }
    Time operator+ (const Time t) const {
        Time temp=*this;
        temp.minutes=temp.minutes+t.minutes;
        temp.hours=temp.hours+t.hours;
        temp.normalize();
        return temp;
    }
    Time operator-(const Time t)const {
        Time temp=*this;
        temp.minutes=temp.minutes-t.minutes;
        temp.hours=temp.hours-t.hours;
        temp.normalize();
        return temp;
    }
    Time operator*(const Time t)const {
        int minute1=hours*60+minutes;
        int m2=t.hours*60+t.minutes;
        int result = minute1*m2;
        Time temp(0,result);
        temp.normalize();
        return temp;
    }
    bool operator==(const Time t)const {
        return hours==t.hours & minutes==t.minutes;
    }
    Time operator+=(const Time t) {
        *this=*this+t;
        normalize();
        return *this;
    }
    Time operator-=(const Time t) {
        *this=*this-t;
        normalize();
        return *this;
    }
    Time operator*=(const Time t){
        *this=*this*t;
        normalize();
        return *this;
    }


};
ostream& operator<<(ostream& out, Time t) {
    out<<t.hours<< " hours "<<t.minutes<<" minutes\n";
    return out;
}
istream& operator>>(istream& in, Time& t) {
    cout<<"Enter hours and minutes: ";
    in>>t.hours>>t.minutes;
    t.normalize();
    return in;
}


int main() {
    Time t1(2, 45), t2(1, 30), t3;

    cout << "Initial Times:\n";
    cout << t1 << endl;
    cout << t2 << endl;

    cout << "\nTesting input operator >> :\n";
    cout << "Enter a new time (hours and minutes): ";
    cin >> t3;
    cout << "You entered: " << t3 << endl;

    cout << "\nTesting + operator:\n";
    t3 = t1 + t2;
    cout << t3 << endl;

    cout << "\nTesting - operator:\n";
    t3 = t1 - t2;
    cout << t3 << endl;

    cout << "\nTesting * operator:\n";
    t3 = t1 * t2;
    cout << t3 << endl;

    cout << "\nTesting prefix ++ and postfix ++:\n";
    ++t1;
    cout << t1 << endl;
    t1++;
    cout << t1 << endl;

    cout << "\nTesting prefix -- and postfix --:\n";
    --t2;
    cout << t2 << endl;
    t2--;
    cout << t2 << endl;

    cout << "\nTesting == operator:\n";
    if (t1 == t2)
        cout << "Equal times\n";
    else
        cout << "Not equal\n";

    cout << "\nTesting +=, -=, *= operators:\n";
    t1 += t2;
    cout << t1 << endl;
    t1 -= t2;
    cout << t1 << endl;
    t1 *= t2;
    cout << t1 << endl;


    return 0;
}