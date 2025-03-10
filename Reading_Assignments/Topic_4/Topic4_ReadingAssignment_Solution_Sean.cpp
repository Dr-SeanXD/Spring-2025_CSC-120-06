/*
 * @Author       : Sean Lin
 * @Date Created : Mar. 5th, 2025
 * @File Name    : Topic4_ReadingAssignment_Solution_Sean.cpp
 * @Project      : Topic 4 Reading Assignment
 * @Description  : A 2-player dice-rolling game that sees which player rolls 0 to 2 dice that has a sum
 *                 of 15 points. If a player rolls over 15 points, that player loses. If both player roll
 *                 less or equal to 15 points, the one closer to 15 points wins.
 */

//Including the iostream file for cin and cout.
#include <iostream>

//Specifying to use the std portion/library of the iostream file.
using namespace std;

//Entry point of the program.
int main() {
    //Using the current time as the seed for the random generator.
    srand(time(0));

    //Randomizing the point two players roll for deciding who will go first.
    int player1Turn = rand() % (8-1) + 1, player2Turn = rand() % (8-1) + 1;

    //Printing how many points each player rolled.
    cout << "Player 1 rolled " << player1Turn << '\n';
    cout << "Player 2 rolled " << player2Turn << '\n';

    //Declare variables that will store the sum of the points each player rolls.
    int player1Sum = 0, player2Sum = 0;

    /*
    The player that rolled a lower point will go first. As of situation when both players rolled equal
    numbers, the good guy usually goes first. Therefore, Player 1 will go first:)
    */
    if (player1Turn <= player2Turn) {
        //Printing that Player 1 will go first.
        cout << "Player 1 will go first.\n";

        //Declare a variable that will store how many dice the current player wants to roll.
        int rollDice;

        //Printing that it's Player 1's turn.
        cout << "Player 1's turn:\n";

        //Asks how many dice does the player want to roll and store the input into the rollDice integer.
        cout << "How many dice does Player 1 want to roll: ";
        cin >> rollDice;

        //Using if and else if, roll different times of dice and add the points to the player's sum.
        if (rollDice == 1) {
            player1Sum += rand() % (8-1) + 1;
        }
        else if (rollDice == 2) {
            player1Sum += rand() % (8-1) + 1;
            player1Sum += rand() % (8-1) + 1;
        }

        //Printing that it's Player 2's turn.
        cout << "Player 2's turn:\n";

        //Asks how many dice does the player want to roll and store the input into the rollDice integer.
        cout << "How many dice does Player 2 want to roll: ";
        cin >> rollDice;

        //Using if and else if, roll different times of dice and add the points to the player's sum.
        if (rollDice == 1) {
            player2Sum += rand() % (8-1) + 1;
        }
        else if (rollDice == 2) {
            player2Sum += rand() % (8-1) + 1;
            player2Sum += rand() % (8-1) + 1;
        }
    }
    else {
        //Printing that Player 2 will go first.
        cout << "Player 2 will go first.\n";

        //Declare a variable that will store how many dice the current player wants to roll.
        int rollDice;

        //Printing that it's Player 2's turn.
        cout << "Player 2's turn:\n";

        //Asks how many dice does the player want to roll and store the input into the rollDice integer.
        cout << "How many dice does Player 2 want to roll: ";
        cin >> rollDice;

        //Using if and else if, roll different times of dice and add the points to the player's sum.
        if (rollDice == 1) {
            player2Sum += rand() % (8-1) + 1;
        }
        else if (rollDice == 2) {
            player2Sum += rand() % (8-1) + 1;
            player2Sum += rand() % (8-1) + 1;
        }

        //Printing that it's Player 1's turn.
        cout << "Player 1's turn:\n";

        //Asks how many dice does the player want to roll and store the input into the rollDice integer.
        cout << "How many dice does Player 2 want to roll: ";
        cin >> rollDice;

        //Using if and else if, roll different times of dice and add the points to the player's sum.
        if (rollDice == 1) {
            player1Sum += rand() % (8-1) + 1;
        }
        else if (rollDice == 2) {
            player1Sum += rand() % (8-1) + 1;
            player1Sum += rand() % (8-1) + 1;
        }
    }

    //Prints how many points each player rolled.
    cout << "Player 1 rolled a sum of " << player1Sum << " points.\n";
    cout << "Player 2 rolled a sum of " << player2Sum << " points.\n";

    //Check if both or either player rolled higher than 15 points.
    if (player1Sum > 15 && player2Sum > 15) {
        cout << "Both players rolled over 15 points. No one wins.\n";
    }
    else if (player1Sum > 15) {
        cout << "Player 1 rolled over 15 points.\n";
        cout << "Player 1 loses and Player 2 wins.\n";
    }
    else if (player2Sum > 15) {
        cout << "Player 2 rolled over 15 points.\n";
        cout << "Player 2 loses and Player 1 wins.\n";
    }
    else {
        //Find how close it is to 15 points for each player.
        int player1Difference = 15 - player1Sum, player2Difference = 15 - player2Sum;

        //Using if-else statement, decide the winner, whose points are closer to 15.
        if (player1Difference < player2Difference) {
            cout << "Player 1 rolled closer to 15 points. Player 1 wins.\n";
        }
        else {
            cout << "Player 2 rolled closer to 15 points. Player 2 wins.\n";
        }
    }

    return 0;
}