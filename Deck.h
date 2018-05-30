/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Deck.h
 * Author: Wyatt Bowen
 *
 * Created on April 21, 2018, 9:37 AM
 */

#ifndef DECK_H
#define DECK_H
#include <iostream>
#include <cstdlib>
using namespace std;


class Deck{
private:
    int a[45];
    int drawn;
    int drawnSinceShuffle;
    //Card cards[45] = {a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],a[14],a[15],a[16],a[17],a[18],a[19],a[20],a[21],a[22],a[23],a[24],a[25],a[26],a[27],a[28],a[29],a[30],a[31],a[32],a[33],a[34],a[35],a[36],a[37],a[38],a[39],a[40],a[41],a[42],a[43],a[44]};
public:
    Deck();
    void shuffle();
    string getTitle(int);
    int getDrawn(){return drawn;}
    int get
    void incDrawn(){drawn += 1; drawnSinceShuffle += 1;}
};



#endif /* DECK_H */

