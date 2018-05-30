/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Wyatt Bowen
 *
 * Created on April 6, 2018, 5:39 PM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include "Game.h"
#define RED game.red
#define BLUE game.blue
#define YELLOW game.yellow
#define GREEN game.green
using namespace std;

/*
 * 
 */

void drawBoard(Game);
Game doTurn(Game);
Player performMove(int, Player, Game);


int main(int argc, char** argv) {
    srand(time(0));
    //cout << "The game is running!";
    int redpos[4] = {0,1,2,3};
    int bluepos[4] = {0,1,2,3};
    int yellowpos[4] = {0,1,2,3};
    int greenpos[4] = {0,1,2,3};
    Game game(0,redpos,1,bluepos,2,yellowpos,3,greenpos);
    game.deck.shuffle();
    //game.red.reportStats();// Debug
    /*cout << "Listing cards in deck: ";//Debug
    for(int i=0;i<45;i++){
        cout << " " << game.deck.getTitle(game.deck.a[i]) << " ";//Debug
    }*/
    game.maxInHome=0;
    game.red.inStart=game.blue.inStart=game.yellow.inStart=game.green.inStart=4;
    //cout << game.red.pawn1.convertPos();
    game.red.turn=0;game.blue.turn=1;game.yellow.turn=2;game.green.turn=3;
    while(game.maxInHome!=4){
        game = doTurn(game);
        cout << "\nCards drawn: " << game.deck.drawn;
        cout << "\nCard Drawn: " << game.deck.getTitle(game.deck.a[game.deck.drawnSinceShuffle]);
        if(game.deck.drawnSinceShuffle>=30){
            
            game.deck.shuffle();
            //game.deck.drawnSinceShuffle=0; now included in shuffle function
        }
        if(game.deck.drawn>=100){
            cout << "\n\nMore cards than acceptable drawn.";
            return 5;
        }
    }
    return 0;
}

void drawBoard(Game game){
    
}



Game doTurn(Game game){
    int cardDrawn = game.deck.a[game.deck.drawnSinceShuffle++];game.deck.drawn++;
    for(int i=0;i<1;i++){
        if(RED.turn<BLUE.turn&&RED.turn<YELLOW.turn&&RED.turn<GREEN.turn){
            cout << "\nRed's Turn!\n";
            RED = performMove(cardDrawn, RED, game);
            if(cardDrawn!=2){
                RED.turn += 3;
                BLUE.turn--;
                YELLOW.turn--;
                GREEN.turn--;break;
            }
        }
        if(BLUE.turn<RED.turn&&BLUE.turn<YELLOW.turn&&BLUE.turn<GREEN.turn){
            cout << "\nBlue's Turn!\n";
            BLUE = performMove(cardDrawn, BLUE, game);
            if(cardDrawn!=2){
                RED.turn--;
                BLUE.turn+=3;
                YELLOW.turn--;
                GREEN.turn--;break;
            }
        }
        if(YELLOW.turn<BLUE.turn&&YELLOW.turn<RED.turn&&YELLOW.turn<GREEN.turn){
            cout << "\nYellow's Turn!\n";
            YELLOW = performMove(cardDrawn, YELLOW, game);
            if(cardDrawn!=2){
                RED.turn--;
                BLUE.turn--;
                YELLOW.turn+=3;
                GREEN.turn--;break;
            }
        }
        if(GREEN.turn<BLUE.turn&&GREEN.turn<YELLOW.turn&&GREEN.turn<RED.turn){
            cout << "\nGreen's Turn!\n";
            GREEN = performMove(cardDrawn, GREEN, game);
            if(cardDrawn!=2){
                RED.turn--;
                BLUE.turn--;
                YELLOW.turn--;
                GREEN.turn+=3;break;
            }
        }
    }


    game.maxInHome = game.getMaxInHome();
    //game.maxInHome++;
    return game;
}

Player performMove(int card, Player current, Game game){
    bool exitStart = 0;
    bool moveTo = 0;
    int displace = 0;
    char choice;
    cout << "This is the numeric value of the card that was drawn: "<<card<<endl;
    switch(card){
        case 0:
            exitStart=1;
            moveTo=1;
            break;
        case 1:
            exitStart=1;
            displace=1;
            break;
        case 2:
            exitStart=1;
            displace=2;
            break;
        case 3:
            displace=3;
            break;
        case 4:
            displace=-4;
            break;
        case 5:
            displace=5;
            break;
        case 7:
            displace=7;
            break;
        case 8:
            displace=8;
            break;
        case 10:
            displace=10;
            break;
        case 11:
            moveTo=1;
            displace=11;
            break;
        case 12:
            displace=12;
            break;
        default:
            exitStart=0;
            displace=0;
            moveTo=0;break;
    }
    cout << "These are the positions of the current player's pawns at the beginning: " << current.pawn1.convertPos()<<" "<<current.pawn2.convertPos()<<" "<<current.pawn3.convertPos()<<" "<<current.pawn4.convertPos()<<endl;
    if(current.COM==0){
        cout << "\n\n\COLOR: " << current.color;
        current.inStart = 0;
        if(current.pawn1.pos<4)++current.inStart;
        if(current.pawn2.pos<4)++current.inStart;
        if(current.pawn3.pos<4)++current.inStart;
        if(current.pawn4.pos<4)++current.inStart;
        //cout << current.inStart;
        if(exitStart&&current.inStart>1&&current.inStart<4){
            do{
                cout << "Take a piece out of start?(Y or N): ";
                choice = 'Y';
                cin >> choice;
                if(choice == 'Y'||choice == 'y'){
                    for(int i=0;i<1;i++){
                        if(current.pawn1.pos<=3){
                            current = game.setPos(current,1,4);break;
                        }
                        if(current.pawn2.pos<=3){
                            current = game.setPos(current,2,4);break;
                        }
                        if(current.pawn3.pos<=3){
                            current = game.setPos(current,3,4);break;
                        }
                        if(current.pawn4.pos<=3){
                            current = game.setPos(current,4,4);break;
                        }
                    }
                }
            }while(choice!='Y'&&choice!='N'&&choice!='y'&&choice!='n');
        }
        if(exitStart&&current.inStart==4){
            for(int i=0;i<1;i++){
                if(current.pawn1.pos<=3){
                    current = game.setPos(current,1,4);break;
                }
                if(current.pawn2.pos<=3){
                    current = game.setPos(current,2,4);break;
                }
                if(current.pawn3.pos<=3){
                    current = game.setPos(current,3,4);break;
                }
                if(current.pawn4.pos<=3){
                    current = game.setPos(current,4,4);break;
                }
            }
        }
          
    }
    return current;
}