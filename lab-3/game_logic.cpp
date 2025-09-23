
// Created by Orifjon Qarshiboyev on 09/09/25.
//
#include "iostream"
#include "random"
#include "Knight.h"
#include "Monster.h"
using namespace std;
void start_game() {
    std::string name;
    cout << "Please enter your name: ";
    cin >> name;
    knight player=knight(name);
    Monster monster;
    int update;
    while (monster.get_is_alive() or player.get_is_alive()) {
        int attack_player = rand() % 4+1;
        int attack_monster = rand() % 3+1;
        switch (attack_player) {
            case 1:
                update=monster.get_health()-player.basic_attack();
                monster.set_health(update);
                cout << " Monster health is " << monster.get_health() << endl;
                break;
            case 2:
                update=monster.get_health()-player.shield_attack();
                monster.set_health(update);
                cout << " Monster health is " << monster.get_health() << endl;
                break;
            case 3:
                update=monster.get_health()-player.sword_attack();
                monster.set_health(update);
                cout << " Monster health is " << monster.get_health() << endl;
                break;
            case 4:
                update=monster.get_health()-player.heavy_attack();
                monster.set_health(update);
                cout << " Monster health is " << monster.get_health() << endl;
                break;
        }
        switch (attack_monster) {
            case 1:
                update=player.get_health()-monster.claw_attack();
                player.set_health(update);
                cout << " Player health is " << player.get_health() << endl;
                break;
            case 2:
                update=player.get_health()-monster.bite_attack();
                player.set_health(update);
                cout << " Player health is " << player.get_health() << endl;
                break;
            case 3:
                update=player.get_health()-monster.roar_attack();
                player.set_health(update);
                cout << " Player health is " << player.get_health() << endl;
                break;

        if (monster.get_health()<=0) {
            monster.set_is_alive(false);
            cout<<player.get_name()<<" wins!!"<<endl;
        }else if (player.get_health()<=0) {
            player.set_is_alive(false);
            cout<<player.get_name()<<" loses!!"<<endl;
        }}
    }
}