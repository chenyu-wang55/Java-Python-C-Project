//
//  CardDeck.cpp
//  CS331_HW05
//
//  Created by Chenyu Wang on 11/24/19.
//  Copyright © 2019 chenyu wang. All rights reserved.
//

#include "CardDeck.h"
#include <stdlib.h>
#include <time.h>

CardDeck::CardDeck()
{
    srand(time(0));
    remain=52;
    for(int i=0;i<=3;i++){
        for(int j=0;j<13;j++){
            deck[i*13+j]=j+1;
        }
    }
}

CardHand CardDeck::deal(int size){
    int card[52];
    for(int i=0; i<size; i++){
       int  r=rand()%remain;
        card[i]=deck[r];
        for(int j=r; j<remain-1; j++){
            deck[j]=deck[j+1];
        }
        remain--;
    }
    
    CardHand hand;
    hand.cardInHand(card,size);
    return hand;
}
