/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Game.h"

Game::Game(int rturn,int rpos[4],int bturn, int bpos[4], int yturn, int ypos[4], int gturn, int gpos[4]){
        //Player red('r', rturn, rpos), blue('b', bturn, bpos), yellow('y', yturn, ypos), green('g', gturn, gpos);
        //red.setStats(0,'r',rturn,rpos);
        //blue.setStats(1,'b', bturn, bpos);
        //yellow.setStats(1,'y', yturn, ypos);
        //green.setStats(1,'g', gturn, gpos);
    }

int Game::getMaxInHome(){
    int max;
    max = red.inHome;
    if(blue.inHome>max) max = blue.inHome;
    if(yellow.inHome>max) max = yellow.inHome;
    if(green.inHome>max) max = green.inHome;
    return max;
}

Player Game::setPos(Player current, int pawn, int newPos){
    
    if(red.pawn1.convertPos()==newPos) return current;
    if(red.pawn2.convertPos()==newPos) return current;
    if(red.pawn3.convertPos()==newPos) return current;
    if(red.pawn4.convertPos()==newPos) return current;
    if(blue.pawn1.convertPos()==newPos) return current;
    if(blue.pawn2.convertPos()==newPos) return current;
    if(blue.pawn3.convertPos()==newPos) return current;
    if(blue.pawn4.convertPos()==newPos) return current;
    if(yellow.pawn1.convertPos()==newPos) return current;
    if(yellow.pawn2.convertPos()==newPos) return current;
    if(yellow.pawn3.convertPos()==newPos) return current;
    if(yellow.pawn4.convertPos()==newPos) return current;
    if(green.pawn1.convertPos()==newPos) return current;
    if(green.pawn2.convertPos()==newPos) return current;
    if(green.pawn3.convertPos()==newPos) return current;
    if(green.pawn4.convertPos()==newPos) return current;
    if(pawn==1) current.pawn1.pos = newPos;
    if(pawn==2) current.pawn2.pos = newPos;
    if(pawn==3) current.pawn3.pos = newPos;
    if(pawn==4) current.pawn4.pos = newPos;
    return current;
}

Player Game::getPlayer(char team){
    if(team=='r'||team=='R') return red;
    if(team=='b'||team=='B') return blue;
    if(team=='y'||team=='Y') return yellow;
    if(team=='g'||team=='G') return green;
    cout << "\nInvalid team, defaulting to red\n";
    return red;
}
void Game::setPlayer(Player in, char team){
    if(team=='r'||team=='R') red = in;
    if(team=='b'||team=='B') blue = in;;
    if(team=='y'||team=='Y') yellow = in;
    if(team=='g'||team=='G') green = in;;
}