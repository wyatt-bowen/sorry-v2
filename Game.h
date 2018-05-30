/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Game.h
 * Author: Owner
 *
 * Created on April 21, 2018, 9:32 AM
 */

#ifndef GAME_H
#define GAME_H
#include "Deck.h"
#include "Player.h"
class Game{
private:
    Deck deck;
    Player red, blue, yellow, green;
    int maxInHome;
public:
    Game(int, int*, int, int*, int, int*, int, int*);
    int getMaxInHome();
    void setMaxInHome(int in){maxInHome=in;}
    Deck getDeck(){return deck;}
    void setDeck(Deck in){deck = in;}
    Player getPlayer(char);
    void setPlayer(Player, char);
    Player setPos(Player, int, int);
};

#endif /* GAME_H */

