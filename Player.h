/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Player.h
 * Author: Wyatt Bowen
 *
 * Created on April 21, 2018, 11:50 PM
 */

#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "Pawn.h"
using namespace std;
struct Player{
    Player();
    Player(bool, char, int, int *);
    //void setStats(bool, char, int, int *);
    void reportStats();
    char color;
    bool COM;
    int turn, inHome;
    int inStart;
    Pawn pawn1, pawn2, pawn3, pawn4;
    int pos1, pos2, pos3, pos4;
    
    //Player(char color, int turn, int pos[4]){}
    
};

#endif /* PLAYER_H */

