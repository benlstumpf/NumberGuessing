/*
 Author: Ben Stumpf
 This is a simple number guessing game to learn the basic control structures of C++
 */
#include <iostream>
#include <stdlib.h>

using namespace std;

int getUserGuess(int currentRound);
bool checkUserGuess(int goalNumber, int userGuess);

int main(){
    /*
     Data members used:
     goalNumber: The number trying to be guessed
     userGuess:  The current guess from the user
     maxRounds:  The number of rounds the user has to guess the number.
     */
    int goalNumber;
    int userGuess;
    int maxRounds = 3;
    bool guessIsRight = false;
    //Statements to start the game will be made.
    cout << "Let's play a game" << endl;
    
    //Choose the goal number.
    goalNumber = (rand() * rand()) % 10;
    cout << "I have chosen a number between 0-9." << endl;
    cout << "You will have " << maxRounds << " rounds to guess my number." << endl;
    //As we will need the userGuess to have a value for the loop, we will set it's value to the goal number -1
    userGuess = goalNumber - 1;
    //The number of rounds will be tracked by a for loop
    for (int currentRound = 1; currentRound <= maxRounds && !guessIsRight; currentRound++) {
        //First we must have a guess from the user, then check the input
        userGuess = getUserGuess(currentRound);
        guessIsRight = checkUserGuess(goalNumber, userGuess);
    }
    //After the for loop, statements about the end of the game will be made
    if(guessIsRight){
        cout << "Congrates, you won the game." << endl;
    }
    else{
        cout << "Better luck next time." << endl;
        cout << "The number was " << goalNumber << endl;
    }
    
}

//This function will vaildate that the users input and only return when it is valid
int getUserGuess(int currentRound){
    //TODO figure out a way of execpting large numbers
    int tempUserInput;
    cout << "Round " << currentRound << " start!!" << endl;
    //TODO implement while loop
    //while(tempUserInput is not between 0-9){
    cout << "Please make a guess between 0-9." << endl;
    cin >> tempUserInput;
    //TODO implement if statement
    //if(tempUserInput is between 0-9){
    return tempUserInput;
    //}
    //}
    
    
}

//This function will check that the users input is correct
//If incorrect, the user will be notified
bool checkUserGuess(int goalNumber, int userGuess){
    int n = goalNumber - userGuess;
    if(n == 0){
        cout << "That is the correct number" << endl;
        return true;
    }
    else{
        if(n >=  2){
            cout << "That is way to low" << endl;
        }
        if(n == 1){
            cout << "That is a little low" << endl;
        }
        if(n == -1){
            cout << "That is a little high" << endl;
        }
        if(n <= -2){
            cout << "That is way to high" << endl;
        }
        return false;
    }
}
