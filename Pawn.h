/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pawn.h
 * Author: Owner
 *
 * Created on April 22, 2018, 5:44 PM
 */

#ifndef PAWN_H
#define PAWN_H

class Pawn{
private:
    int pos;
    int validPos[72];
    char team, no;
    char visual[2];
public:
    Pawn();
    Pawn(char, char, int);
    int convertPos();
    int getPos(){return pos;}
    char* getVisual(){return visual;}
};

#endif /* PAWN_H */

