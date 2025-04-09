/*
 * @Author       : Sean Lin
 * @Date Created : Apr. 9th, 2025
 * @File Name    : Topic6_Lab1_Solution_Sean.cpp
 * @Project      : Topic 6 Lab 1
 * @Description  : Using functions, asks the user a starting and ending number. Then, sum the numbers
 *                 from the start to the end and print the result.
 */

#include <iostream>
using namespace std;

/**
 * Print a message to the console.
 * 
 * @param message The message that will be printed.
 */
void prompt(string message) {
    cout << message;
}

/**
 * By calling the prompt() function, ask the user to input a number. Then, return the inputed number.
 * 
 * @param message The prompt message that will be used to call the function prompt().
 * @return The integer the user inputed.
 */
int getInt(string message) {
    int input;
    prompt(message);
    cin >> input;
    return input;
}

/**
 * Sums the numbers from the start to the end and returns the result.
 * 
 * @param start The starting number.
 * @param end The ending number.
 * @return The sum from the starting to ending number.
 */
int sumNumbers(int start, int end) {
    //Initializes a variable to 0 to add the numbers.
    int result = 0;

    //Using a for-loop, add the numbers from the start to the end into the result variable.
    for (int i = start; i<=end; i++) {
        result += i;
    }

    //Return the result variable.
    return result;
}

/**
 * Entry point of the program.
 */
int main() {

    //By calling the getInt() function, asks the user for the starting the ending number.
    int start = getInt("Enter the start number: ");
    int end = getInt("Enter the end number: ");

    /*
    Using the sumNumbers() function, add the numbers from the starting to ending number by passing in
    the start and end values obtained above.
    */
    int result = sumNumbers(start, end);

    //Print out the result.
    cout << "The sum of " << start << " to " << end << " is " << result << '\n';

    return 0;
}