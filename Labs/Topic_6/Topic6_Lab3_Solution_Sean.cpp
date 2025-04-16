/*
 * @Author       : Sean Lin
 * @Date Created : Apr. 16th, 2025
 * @File Name    : Topic6_Lab3_Solution_Sean.cpp
 * @Project      : Topic 6 Lab 3
 * @Description  : Creating functions and calling them.
 */

#include <iostream>
using namespace std;

//Prototypes of the functions.
double avg(int, int);
void avg(int, int, double&);
bool isOdd(int);
bool isSame(int, int, int, int);
bool isSame(int, int);

/**
 * Calculate the average.
 * 
 * @param sum The sum.
 * @param count How many numbers there are.
 * @return The average number.
 */
double avg(int sum, int count) {
    return double(sum) / count;
}

/**
 * Modify the average value with reference passed in.
 * 
 * @param sum The sum.
 * @param count How many numbers there are.
 * @param average The average double that its reference is passed in.
 */
void avg(int sum, int count, double& average) {
    average = avg(sum, count);
}

/**
 * See if an integer is an odd number.
 * 
 * @param value The value that will be determined if it's odd.
 * @return If the value is odd.
 */
bool isOdd(int value) {
    if (value % 2 == 0) return false;
    return true;
}

/**
 * See if either the first 3 parameters are the same as the compareNum.
 * 
 * @param firstnum The first number.
 * @param secondNum The second number.
 * @param thirdNum The third number.
 * @param compareNum The comparing number.
 * @return If either number is the same as the compareNum.
 */
bool isSame(int firstNum, int secondNum, int thirdNum, int compareNum) {
    return (isSame(firstNum, compareNum) || isSame(secondNum, compareNum) || isSame(thirdNum, compareNum));
}

/**
 * See if the two numbers are the same.
 * 
 * @param number One of the numbers being compared.
 * @param compareNum One of the numbers being compared.
 * @return If the numbers are the same.
 */
bool isSame(int number, int compareNum) {
    return (number == compareNum);
}

/**
 * Entry point of the program.
 */
int main() {
    int sum = 42;
    int count = 11;

    //Call the avg function.
    double average1 = avg(sum, count);

    double average2;

    //Call the avg function that passes in the double reference.
    avg(sum, count, average2);

    //Print the average.
    if (average1 == average2) cout << "Average: " << average1 << '\n';

    //See if the sum is odd.
    if (isOdd(sum)) {
        cout << "Sum is odd!\n";
    }
    else cout << "Sum isn't odd!\n";

    //Check if the isSame() functions work.
    if (isSame(1, 1, 1, 1)) cout << "isSame() is funcitoning correctly.\n";

    return 0;
}