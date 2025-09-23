//
// Created by Orifjon Qarshiboyev on 09/09/25.
//

#ifndef OOP_NUU_MONSTER_H
#define OOP_NUU_MONSTER_H
#include <string>
#include <iostream>
#include <time.h>
#include <random>

class Monster {
private:
    std::string name;
    int health;
    bool is_alive;
public:
    Monster() {
        name="Terror Beast";
        health = 100;
        is_alive = true;
    }
    Monster(std::string name) {
        this-> name=name;
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
    int claw_attack() {
        std::cout<<name<<"  slashes with its claw! ";
        return 8;
    }
    int bite_attack(){
        std::cout<<name<<"  bites ferociously! ";
        return 12;
    }
    int roar_attack(){
        std::cout<<name<<"  unleashes a terrifying roar! ";
        return 18;
    }

    int heal() {
        srand(time(0));
        int amount= rand()%10+10;
        std::cout<<name<<amount<<"regains its strenght!! ";
    }
};
#endif //OOP_NUU_MONSTER_H