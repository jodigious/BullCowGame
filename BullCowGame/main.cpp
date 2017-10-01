/*---------------------------------------------------------------------------------------------------
//
//  main.cpp
//  BullCowGame
//
//  Created by Josh on 2/2/17.
//  Copyright © 2017 Josh. All rights reserved.
//
// --------------------------------------------------------------------------------------------------
*/

#include <iostream>                 // Import (standard) library code.
#include <string>                   // Recall that <> is for standard libraries, "" for files you've created yourself.

using namespace std;                // Danger of this is potential namespace clash (2 libraies use the same name.

void PrintIntro();
string GetGuessAndPrintBack();


int main()
{

    PrintIntro();
    
    constexpr int NUMBER_OF_TURNS = 5;
    for (int i = 1; i <= NUMBER_OF_TURNS; i++)
    {
        GetGuessAndPrintBack();
    }
    
    return 0;
}


// Prints Intro
void PrintIntro()
{
    constexpr int WORD_LENGTH = 5;  // review the purpose of constant expressions vs variables.
    
    cout << "Welcome to Bulls and Cows!\n";
    cout << "Can you guesss the " << WORD_LENGTH << " letter isogram I'm thinking of?";
    
    return;
}

// Gets and return the guess.
string GetGuessAndPrintBack()
{
    cout << "Enter your guess: ";
   
    string Guess = "";
    
    getline(cin, Guess);
    
    cout << "\nYou guessed " << Guess << "!\n";
    cout << endl;
    
    return Guess;
}








































