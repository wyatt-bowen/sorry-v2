/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Pawn.h"
#include <iostream>
using namespace std;
Pawn::Pawn(){
    this->team = 'r';
    this->pos = 0;
    for(int i=0;i<72;i++){
        this->validPos[i] = 0;
    }
    
}

Pawn::Pawn(char team, char no, int net){
    this->pos = net;
    cout << "\nInitializing normally\n" << net;
    this->team = team;
    if(team == 'r'){
        int toSet[72] = {100,101,102,103,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,104,105,106,107,108,109,110,111,112};
        for(int i=0;i<72;i++){
            this->validPos[i] = toSet[i];
        }
        this->visual[0] = team;
        this->visual[1] = no;
    }
    if(team == 'b'){
        int toSet[72] = {200,201,202,203,17,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,4,5,6,7,8,9,10,11,12,13,14,15,16,104,105,106,107,108,109,110,111,112};
        for(int i=0;i<72;i++){
            this->validPos[i] = toSet[i];
        }
        this->visual[0] = team;
        this->visual[1] = no;
    }
    if(team == 'y'){
        int toSet[72] = {300,301,302,303,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,104,105,106,107,108,109,110,111,112};
        for(int i=0;i<72;i++){
            this->validPos[i] = toSet[i];
        }
        this->visual[0] = team;
        this->visual[1] = no;
    }
    if(team == 'g'){
        int toSet[72] = {400,401,402,403,50,51,52,53,54,55,56,57,58,59,60,61,62,63,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,49,104,105,106,107,108,109,110,111,112};
        for(int i=0;i<72;i++){
            this->validPos[i] = toSet[i];
        }
        this->visual[0] = team;
        this->visual[1] = no;
    }
}

int Pawn::convertPos(){
    //cout << "\nThis is the relative position: "<< this->pos;
    //cout << "\nThis is the actual position: "<< this->validPos[this->pos];
    return this->validPos[this->pos];
}