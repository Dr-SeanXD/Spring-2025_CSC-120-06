/*
 * @Author       : Sean Lin
 * @Date Created : Apr. 14th, 2025
 * @File Name    : Topic6_Reading_Assignment_Solution_Sean.cpp
 * @Project      : Topic 6 Reading Assignment
 * @Description  : Create functions. :)
 */

#include <iostream>
using namespace std;

//Prototypes of the functions.
void printNumber(int);
double doubleNumber(int);
void doubleNumber(int&);
void printMessage(string);
void printMessage(string, ostream&);
int getIntValue();
int randBetween(int, int);
double circleArea(double);

/**
 * Print the number to the console.
 * 
 * @param number The integer that will be printed.
 */
void printNumber(int number) {
    cout << number << '\n';
}

/**
 * Return the value as a double.
 * 
 * @param number The integer that will be converted into a double.
 * @return The double value.
 */
double doubleNumber(int number) {
    return double(number);
}

/**
 * Doubles the integer.
 * 
 * @param number The number that will be doubled.
 */
void doubleNumber(int& number) {
    number *= 2;
}

/**
 * Print the message to the console.
 * 
 * @param message The message that will be printed.
 */
void printMessage(string message) {
    cout << message;
}

/**
 * Print the message with the ostream provided.
 * 
 * @param message The message that will be printed.
 * @param os The place the message will be printed.
 */
void printMessage(string message, ostream& os) {
    os << message;
}

/**
 * Gets an input from the user.
 * 
 * @return The inputted value.
 */
int getIntValue() {
    int value;
    cin >> value;
    return value;
}

/**
 * Generate a number between the bounds.
 * 
 * @param min The minimum value of the random number.
 * @param max The maximum value of the random number.
 * @return The randomly generated number.
 */
int randBetween(int min, int max) {
    return (rand() % (max - min + 1)) + min;
}

/**
 * Calculate the circle area.
 * 
 * @param radius The radius of the circle.
 * @return The area of the circle.
 */
double circleArea(double radius) {
    return radius * radius * 3.14;
}

/**
 * The entry point of the program.
 */
int main() {
    srand(time(0));

    return 0;
}