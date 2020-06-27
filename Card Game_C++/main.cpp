//
//  main.cpp
//  Program: CS331_HW05
//  Chenyu Wang
//  Description:It is a crad game. User get points from some type of card.
//  Last Modifity date:12/17/2019
//
//  Created by Chenyu Wang on 11/24/19.
//  Copyright © 2019 chenyu wang. All rights reserved.
//

#include "CardDeck.h"
#include <QTextStream>
#include <QtGui>
#include <QApplication>
#include "qmessagebox.h"
#include "qinputdialog.h"


int main(int argc, char * argv[]) {
    QApplication app(argc, argv);
    QTextStream cout(stdout);
    CardDeck deck;
    CardHand hand;
    int handSize, playerScore, progScore;
    cout<<"How many cards in a hand?"<<flush;
    handSize=QInputDialog::getInt(0, QString("getInt()"),
        QString ("How many cards in hand?"), 1, 5);
    QMessageBox::StandardButton sb;
    do{
        hand=deck.deal(handSize);
        cout<<"Here is your hand:"<<endl;
        cout<<hand.toString()<<endl;
        playerScore=hand.getValue();
        cout<<QString("Your score is : %1 points.").arg(playerScore)<<endl;
        
        //now a hand for the dealer:
        hand=deck.deal(handSize);
        progScore=hand.getValue();
        cout<<"Here is your hand:"<<endl;
        cout<<"Here is your hand:"<<endl;
        cout<<QString("My score is: %1 points.").arg(progScore)<<endl;
        cout<<QString ("%1 win !!").arg((playerScore > progScore )?"you":"I")<<endl;
        sb=QMessageBox::question(0, QString("QMessageBox::question()"), QString("Another hand?"), QMessageBox::Yes | QMessageBox::No);
    }while (sb==QMessageBox::Yes);
    
    
    
}
