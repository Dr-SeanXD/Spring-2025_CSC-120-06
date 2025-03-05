/*
 * @Author       : Sean Lin
 * @Date Created : Mar. 5th, 2025
 * @File Name    : Topic4_Lab1_Solution_Sean.cpp
 * @Project      : Topic 4 Lab 1
 * @Description  : Stores a secret number between 1 and 10 and lets the user guess it. Print if the user
 *                 guessed too high, too low, or correctly. Also, this program handles situations where
 *                 the user's input (guessed number) is out of range (not between 1 and 10). In this case,
 *                 the program will ask the user to enter another number again "once."
 */

//Include the iostream file for cin and cout.
#include <iostream>

//Specifying to use the std portion of the iostream file.
using namespace std;

//Entry point of the program.
int main() {

    //The current time is the seed for the random generator.
    srand(time(0));

    /*
    Call the rand function and mod it with 10 so the secret number will be between 0 and 9. The +1
    is to add 1 so the secret number will be between 1 and 10.
    */
    int secretNum = (rand() % 10) + 1;

    //Declare a string that will store the user's full name.
    string name;

    //Using the getline function, store the user's full name since 99% there will be a space.
    cout << "Enter your full name: ";
    getline(cin, name);

    //Declare an integer that will store what the user input, which is the number the user is guessing.
    int guessNum;
    cout << "Guess a number between 1 and 10: ";
    cin >> guessNum;

    //If the guessed number is out of bound, print out an error message and input the number again.
    if (guessNum < 1 || guessNum > 10) {
        cout << "Unacceptable number, please enter a new number: ";
        cin >> guessNum;
    }

    //Print out the user's full name, which is stored in the string name inputted earlier.
    cout << "Your name is " << name << '\n';

    //Tell the user if the guessed number is higher, lower, or correct compared to the secret number.
    if (guessNum > secretNum) {
        cout << "Too high...\n";
    }
    else if (guessNum < secretNum) {
        cout << "Too low...\n";
    }
    else {
        cout << "You guessed it!\n";
    }

    //Tell the user what the secret number is.
    cout << "The secret number is " << secretNum << ".\n";

    return 0;
}