//
// Created by Orifjon Qarshiboyev on 10/11/25.
//

#ifndef OOP_NUU_ACCOUNT_H
#define OOP_NUU_ACCOUNT_H
#include <iostream>
using namespace std;
class Account {
    protected:
    string ownerName;
    double balance;
    public:
    Account(string name,double b):ownerName(name),balance(b){};
    double getBalance() {
        return balance;
    }
    virtual void display() {
        cout<<"Owner: "<<ownerName<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
    virtual ~Account() {
        cout<<"Account closed for "<<ownerName<<endl;
    };
    Account operator+(const Account &other) {
        Account temp(ownerName,balance+other.balance);
        return temp;
    }
    int operator-(const Account &other) {
        int difference = balance - other.balance;
        return difference;
    }
    bool operator==(const Account &other) {
        return balance == other.balance;
    }
    friend ostream& operator<<(ostream& out, Account A) {
        out << "Owner Name: "<<A.ownerName<<"\n Balance: "<<A.balance<<endl;
        return out;
    };
    friend istream& operator>>(istream& in,Account A) {
        in>>A.ownerName>>A.balance;
        return in;
    };
};
class SavingsAccount: public Account {
private:
    double interestRate;
    public:
    SavingsAccount(string name,double b,double r):Account(name,b),interestRate(r){};
    void display() override {
        cout<<"Owner: "<<ownerName<<endl;
        cout<<"Balance: "<<balance<<endl;
        cout<<"InterestRate: "<<interestRate<<"%"<<endl;
    }
};

class CheckingAccount: public Account {
    private:
    double transactionFee;
    public:
    CheckingAccount(string name,double b,double r):Account(name,b),transactionFee(r){};
    void display() override {
        cout<<"Owner: "<<ownerName<<endl;
        cout<<"Balance: "<<balance<<endl;
        cout<<"Transaction Fee: "<<transactionFee<<endl;
    }
};



#endif //OOP_NUU_ACCOUNT_H