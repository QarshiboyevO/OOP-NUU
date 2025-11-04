//
// Created by Orifjon Qarshiboyev on 04/11/25.
//
#include <iostream>
using namespace std;
class Instrument {
protected:
    string name;
    string type;
    public:
    Instrument(string n,string t):name(n),type(t){}
    Instrument():name(""),type(""){}
    virtual void play() {
        cout<<"Playing a generic instrument sound...\n";
    }
};
class Guitar:public Instrument {
private:
    int strings;
public:
    Guitar(string n,string t,int s):Instrument(n,t),strings(s){}
    void play() override{
        cout<<"Strumming a guitar with "<< strings <<" strings."<<endl;
    }
};

class Drum:public Instrument {
private:
    double diameter;
public:
    Drum(string n,string t, double d):Instrument(n,t),diameter(d){}
    void play() override{
        cout<<"Beating a drum of diameter " << diameter<<" cm."<<endl;
    }

};
class Flute:public Instrument {
private:
    string material;
public:
    Flute(string n,string t,string m):Instrument(n,t),material(m){}
    void play() override {
        cout<< "Blowing a flute made of "<< material<<endl;
    }
};
class MusicData {
private:
    string title;
    int duration;
public:
    MusicData():title(""),duration(0){}
    MusicData(string t,int d):title(t),duration(d){}
    MusicData(const MusicData& other) {
        title=other.title;
        duration=other.duration;
        cout<<"Copy constructor called"<<endl;
    }
    MusicData operator= (const MusicData& other) {
        if (this!=&other) {
            title=other.title;
            duration=other.duration;
            cout<<"Assigment operator called"<<endl;
        }
        return *this;


    }
    void display() {
        cout<<"Title: "<<title<<endl<<"Duration: "<<duration<<endl;
    }

};

int main(){
    MusicData r1("Bohemian Rhapsody", 354);
    MusicData r2 = r1;
    MusicData r3;
    r3 = r1;
    r1.display();
    r2.display();
    r3.display();

    // Instrument* orchestra[3];
    // orchestra[0] = new Guitar("Guitar", "String", 6);
    // orchestra[1] = new Drum("Drum", "Percussion", 40.5);
    // orchestra[2] = new Flute("Flute", "Wind", "Bamboo");
    // for (int i = 0; i < 3; i++)
    //     orchestra[i]->play();


    return 0;
}