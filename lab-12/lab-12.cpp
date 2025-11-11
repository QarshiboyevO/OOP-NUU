//
// Created by Orifjon Qarshiboyev on 11/11/25.
//
#include <iostream>
using namespace std;
template<typename T>
T maxofthree(T a, T b, T c) {
    if (a>b && a>c) {
        return a;
    }
    else if (b>c && b>a) {
        return b;
    }
    else if (c>a && c>b) {
        return c;
    }
};
template<typename T1>
class Box {
    public:
    T1 first,second,third;
    Box(T1 a, T1 b, T1 c) {
        first=a;
        second=b;
        third=c;
    }
    void set_box(int index,T1 value) {
        try {
            if (index==0) {
                first=value;
            }
            else if (index==1) {
                second=value;
            }
            else if (index==2) {
                third=value;
            }
            else {
                throw out_of_range("Invalid index.");
            }

        }catch (runtime_error& e){
            cout<<e.what()<<endl;
        }
    }
    T1 get_box(int index) {
        try {
            if (index==0) {
                return first;
            }
            else if (index==1) {
                return second;
            }
            else if (index==2) {
                return third;
            }
            else {
                throw out_of_range("Invalid index.");
            }
        }catch (runtime_error& e) {
            cout<<e.what()<<endl;
        }
    }
    T1 sum() {
        return first+second+third;
    }
    void display() {
        cout<<first<<" "<<second<<" "<<third<<endl;
    }

};


int main() {
    Box<int> b1(3, 5, 7);
    b1.display();
    cout << "Sum = " << b1.sum() << endl;
    Box<double> b2(2.5, 4.0, 3.5);
    b2.display();
    cout << "Sum = " << b2.sum() << endl;
    Box<string> b3("Hi", " ", "there");
    b3.display();
    cout << "Sum = " << b3.sum() << endl;
    // Testing exceptions
    try {
        cout << b1.get_box(5) << endl;   // invalid index
    } catch (const exception &e) {
        cout << "Caught: " << e.what() << endl;
    }


    // int a,b;
    // cin>>a>>b;
    // char operation;
    // cin>>operation;
    // try {
    //     if (operation == '+') {
        //     cout<<a+b<<endl;
        // }
        // else if (operation == '-') {
        //     cout<<a-b<<endl;
        // }
        // else if (operation == '*') {
        //     cout<<a*b<<endl;
        // }
        // else if (operation == '/') {
        //     if (b==0) {
        //         throw runtime_error("Error: Division by zero");
        //     }
        //     cout<<a/b<<endl;
        // }
        // else {
        //     throw invalid_argument("Error: Invalid operation");
        // }
        // switch (operation) {
        //     case '+':
        //         cout<<a+b<<endl;
        //     case '-':
        //         cout<<a-b<<endl;
        //     case '*':
        //         cout<<a*b<<endl;
        //     case '/':
        //         if (b==0) {
        //             throw runtime_error("Divide by zero");
        //         }
        //         cout<<a/b<<endl;
        //     default:
        //         throw invalid_argument("Error: Invalid operation");
        //
        // }
    // }catch (runtime_error& e) {
    //         cout<<e.what()<<endl;
    //     };


    return 0;

}