//
// Created by Orifjon Qarshiboyev on 09/09/25.
//

#ifndef OOP_NUU_LAB3_H
#define OOP_NUU_LAB3_H
#include <string>
#include <iostream>
#include <time.h>
#include <random>


class knight {
    private:
    std::string name;
    int health;
    bool is_alive;
    public:
    knight() {
        name = "Unknown";
        health = 100;
        is_alive = true;
    }
    knight(std::string name) {
        this->name=name;
        health = 100;
        is_alive = true;
    }
    std::string get_name() {
        return name;
    }
    void set_name(std::string name) {
        this->name=name;
    }
    int get_health() {
        return health;
    }
    void set_health(int health) {
        this->health=health;
    }
    bool get_is_alive() {
        return is_alive;
    }
    void set_is_alive(bool is_alive) {
        this->is_alive=is_alive;
    }
    int shield_attack() {
        std::cout<<name<<"  uses shield attact";
        return 5;
    }
    int basic_attack() {
        std::cout<<name<<"  attacks with basic attack";
        return 10;
    }
    int sword_attack() {
        std::cout<<name<<"  swings their sword!";
        return 15;
    }
    int heavy_attack() {
        std::cout<<name<< "  unleashes a heavy attack!";
        return 20;
    }
    int heal() {
        srand(time(0));
        int amount= rand()%16+5;
        std::cout<<name<<"  heals for "<<amount<<"health points!";
    }

};




#endif //OOP_NUU_LAB3_H