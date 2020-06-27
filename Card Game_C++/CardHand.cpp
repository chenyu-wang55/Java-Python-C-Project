//
//  CardHand.cpp
//  CS331_HW05
//
//  Created by Chenyu Wang on 11/24/19.
//  Copyright © 2019 chenyu wang. All rights reserved.
//

#include "CardHand.h"
CardHand::CardHand()
{
	int card[52];
	int size;
}
void CardHand::cardInHand(int card[],int size){
    for (int i=0; i<size; i++){
        this->card[i]=card[i];
    }
    this->size=size;
}

int CardHand::getValue(){
    int value=0;
    for (int i=0; i<size; i++){
        int n=0;
        if(card[i]==1)
            value+=4;
        else if(card[i]==13)
            value+=3;
        else if(card[i]==12)
            value+=2;
        else if(card[i]==11)
            value+=1;
        else
            value+=0;
    }
    return value;
}

QString CardHand::toString(){
	QString s="";
	for(int i=0; i<size-1; i++){
		s=s+QString::number(card[i])+";";
	}
	s=s+QString::number(card[size-1]);
	return s;
}

CardHand::~CardHand(){
    
}
