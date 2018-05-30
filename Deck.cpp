/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Deck.h"

Deck::Deck(){
    a[45] = {0,0,0,0,1,1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,7,7,7,7,8,8,8,8,10,10,10,10,11,11,11,11,12,12,12,12};
    drawn = 0;
    drawnSinceShuffle = 0;
}

void Deck::shuffle(){
    int temp = 0;
    cout << "\nShuffling deck.\n";
    for(int i=0;i<200;i++){
        int one = rand()%45;
        int two = rand()%45;
        //cout << "Swapping "<<a[one]<<" and "<<this->a[two]<<"!\n";
        temp = this->a[one];
        this->a[one] = this->a[two];
        this->a[two] = temp;
    }
    drawnSinceShuffle = 0;
}

string Deck::getTitle(int num){
    string title;
    switch(num){
        case 0:
            title = "Sorry!";break;
        case 1:
            title = "1";break;
        case 2:
            title = "2";break;
        case 3:
            title = "3";break;
        case 4:
            title = "4";break;
        case 5:
            title = "5";break;
        case 7:
            title = "7";break;
        case 8:
            title = "8";break;
        case 10:
            title = "10";break;
        case 11:
            title = "11";break;
        case 12:
            title = "12";break;
        default:
            title = "Invalid card";
            break;
    }
    return title;
}
