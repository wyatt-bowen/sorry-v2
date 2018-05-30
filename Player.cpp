/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Player.h"

/*Player::Player(){
        this->color = '0';
        this->turn = -1;
        //this->pawn1.pos = 0;
        //this->pawn2.pos = 1;
        //this->pawn3.pos = 2;
        //this->pawn4.pos = 3;
        this->pawn1 = Pawn(color, '1', 0);
        this->pawn2 = Pawn(color, '2', 1);
        this->pawn3 = Pawn(color, '3', 2);
        this->pawn4 = Pawn(color, '4', 3);
        cout << "Initialized player " << color << " with positions "<<pawn1.pos<<" "<<pos2<<" "<<pos3<<" "<<pos4<<endl;
    }*/

Player::Player(){}

Player::Player(bool COM, char color, int turn, int pos[4]){
        this->COM=COM;
        this->color = color;
        this->turn = turn;
        //this->inStart = 4;
        this->pawn1 = Pawn(color, '1', pos[0]);
        this->pawn2 = Pawn(color, '2', pos[1]);
        this->pawn3 = Pawn(color, '3', pos[2]);
        this->pawn4 = Pawn(color, '4', pos[3]);
}

/*void Player::setStats(bool COM, char color, int turn, int pos[4]){
        this->COM=COM;
        this->color = color;
        this->turn = turn;
        this->pawn1.pos = pos[0];
        this->pawn2.pos = pos[1];
        this->pawn3.pos = pos[2];
        this->pawn4.pos = pos[3];
        cout << "Altered player " << color << " with positions "<<pos1<<" "<<pos2<<" "<<pos3<<" "<<pos4<<endl;
  }*/

void Player::reportStats(){
    cout << "Quick stats for player " << this->color << " with positions "<<this->pos1<<" "<<this->pos2<<" "<<this->pos3<<" and "<<this->pos4<<endl;
}