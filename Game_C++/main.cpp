/*Author Name: Chenyu Wang*/
/*CS331-HW01*/

/*Discription: Write a program to play the following game, which the
 userplays against the computer.This game is played on an imaginary game
 board that has numbered spaces arranged in a circle.[11] For example,
 here is what a game board with 12 spaces might look like.*/

/*Created by Chenyu Wang on 9/29/19.*/

/*Last Modification Date: 9/29/2019*/


#include <iostream>
#include<random>
#include<cstdlib>

using namespace std;

int main() {
    int size;
    int goal;
    int pit;
    int choose;
    int diceN;
    int playerWin=0, comWin=0, playerLose=0, comLose=0;
    srand(time(0));
    //enter the space number;
    while(true){
        cout <<"please enter how many space there are on the game board:";
        cin>>size;
        if(size>=5){
            break;
        }
        cout <<"there must be at least five spaces";
    }
    
    //get goal and pit randomly;
    goal= rand() %(size-1)+2;
    do{
        pit=rand()%(size-1)+2;
    }
    while(goal==pit);
    cout <<"The goal is " <<goal <<"   the pit is " <<pit << endl;
    
    //choose the play method single or continuous
    cout<< "please choose single as 1 or continuous as 2 method to play game";
    cin >>choose;
    
    int playerPosition=0;
    int comPosition=0;
    int dice1=0,dice2=0;
    int turn=0;
    
    //single method to play;
    if(choose==1){
        while(true){
            while(true){
                if(turn==0){
                    //player's turn;
                    cout <<"please press <enter> to roll your dice" <<endl;
                    cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
                    dice1=rand()%(6)+1;
                    dice2=rand()%(6)+1;
                    diceN=dice1+dice2;
                    playerPosition=(playerPosition+diceN) % size;
                    cout <<"you are at space: "<<playerPosition <<endl;
                    if(playerPosition==goal){
                        cout <<"you win the game" <<endl;
                        playerWin++;
                        comLose++;
                        break;
                    }
                    if (playerPosition==pit){
                        cout <<"you lose the game" <<endl;
                        playerLose++;
                        comWin++;
                        break;
                    }
                    turn=1;
                }else{
                    //computer's turn;
                    comPosition=(comPosition+diceN)%size;
                    cout <<"computer is at space "<<comPosition<<endl;
                    if(comPosition==goal){
                        cout<<" the computer wins the game"<<endl;
                        comWin++;
                        playerLose++;
                        break;
                    }
                    if (comPosition==pit){
                        cout<<"the computer lost the game"<<endl;
                        comLose++;
                        playerWin++;
                        break;
                        
                    }
                    turn=0;
                }
            }
            //conclusion;
            cout<<"Player won: " <<playerWin << "times, and Lose: " <<playerLose <<"times"<< endl;
            cout<<"computer won: " <<comWin << "times, and Lose: "<<comLose <<"times" <<endl;
            cout << "\n Do you want to continue the game 1(continue) 0 (exit)" <<endl;
            int decision;
            cin >> decision;
            if(decision==0){
                break;
            }
        }
    }
    else{
        //continuous method to play;
        while(true){
            while(true){
                if(turn==0){
                    //player's turn;
                   dice1=rand()%(6)+1;
                    dice2=rand()%(6)+1;
                    diceN=dice1+dice2;
                    playerPosition=(playerPosition+diceN)%size;
                    cout <<"you are at space: "<<playerPosition <<endl;
                    if(playerPosition==goal){
                        cout <<"you win the game" <<endl;
                        playerWin++;
                        comLose++;
                        break;
                    }
                    if (playerPosition==pit){
                        cout <<"you lose the game " <<endl;
                        playerLose++;
                        comWin++;
                        break;
                        
                    }
                    turn=1;
                }else{
                    //computer's turn;
                    comPosition=(comPosition+diceN)%size;
                    cout <<"computer is at space "<<comPosition<<endl;
                    if(comPosition==goal){
                        cout<<" the computer wins the game"<<endl;
                        comWin++;
                        playerLose++;
                        break;
                    }
                    if (comPosition==pit){
                        cout<<"the computer lost the game "<<endl;
                        comLose++;
                        playerWin++;
                        break;
                    }
                    turn=0;
                }
            }
            //conclusion;
            cout<<"Player won: " <<playerWin << "times, and Lose: " <<playerLose <<"times"<< endl;
            cout<<"computer won: " <<comWin << "times, and Lose: "<<comLose <<"times" <<endl;
            cout << "\n Do you want to continue the game 1(continue) 0 (exit)" <<endl;
            int decision;
            cin >> decision;
            if(decision==0){
                break;
            }
        }
    }
   
    return 0;
}
