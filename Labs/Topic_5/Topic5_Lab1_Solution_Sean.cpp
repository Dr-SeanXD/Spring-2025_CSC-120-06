/*
 * @Author       : Sean Lin
 * @Date Created : Mar. 24th, 2025
 * @File Name    : Topic5_Lab1_Solution_Sean.cpp
 * @Project      : Topic 5 Lab 1
 * @Description  : The program generates a random number between 1 and 100 and let the user to guess
 *                 it. It lets the user know if the guessed number is out of bounds, too high, or too low.
 */

#include <iostream>
using namespace std;

int main() {
    //The current time is the seed for the random generator.
    srand(time(0));

    //Call the rand function to generate a number between 1 and 100;
    int secretNum = (rand() % 100) + 1;

    //Input the user's name.
    string name;
    cout << "Enter your full name: ";
    getline(cin, name);

    //Declare the guessing number and the number of times guessed.
    int num, numGuess = 0;
        
    //Do this while the number is incorrect or out of bounds.
    do {
        //Increment the number of guesses.
        numGuess++;

        //Asks the user to enter a number.
        cout << "Enter a number between 1 to 100: ";
        cin >> num;

        //See if the number is out of bounds.
        if (num < 1 || num > 100) {
            cout << "Invalid number!\n";
        }
        //If it isn't, then determine if the number is too high, too low, or correct.
        else {
            if (num > secretNum) {
                cout << "Guessed number is too high...\n";
            }
            else if (num < secretNum) {
                cout << "Guessed number is too low...\n";
            }
            else {
                cout << "You got the correct number!\n";
            }
        }
    } while(num < 1 || num > 100 || num != secretNum);

    //Print out the name, guessed number, and the number of times the user guessed.
    cout << "Your name is " << name << '\n';
    cout << "You guessed " << num << ", which is correct!\n";
    cout << "You used " << numGuess << " of guess(es) to guess!\n";

    return 0;
}