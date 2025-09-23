//
// Created by Orifjon Qarshiboyev on 09/09/25.
//

#include "Knight.h"
#include "Monster.h"
#include "game_logic.cpp"
#include "iostream"
#include "random"
using namespace std;



int main() {
    knight k1;
    cout<<k1.get_health()<<endl;
    start_game();


    return 0;
}