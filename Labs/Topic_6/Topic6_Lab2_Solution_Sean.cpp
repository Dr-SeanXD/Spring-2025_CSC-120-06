/*
 * @Author       : Sean Lin
 * @Date Created : Apr. 14th, 2025
 * @File Name    : Topic6_Lab2_Solution_Sean.cpp
 * @Project      : Topic 6 Lab 2
 * @Description  : Using functions, generate multiple random integers and find the maximum and minimum
 *                 random numbers among them.
 */

#include <iostream>
using namespace std;

/**
 * Find the maximum integer.
 * 
 * @param val1 The first value.
 * @param val2 The second value.
 * @return The greater integer.
 */
int findMax(int val1, int val2) {
    if (val1 > val2) return val1;
    return val2;
    /*
    You can also use this:
    return max(val1, val2);
    */
}

/**
 * Find the maximum double.
 * 
 * @param val1 The first value.
 * @param val2 The second value.
 * @return The greater double.
 */
double findMax(double val1, double val2) {
    if (val1 > val2) return val1;
    return val2;
    /*
    Again, you can also use this:
    return max(val1, val2);
    */
}

/**
 * Find the minimum integer.
 * 
 * @param val1 The first value.
 * @param val2 The second value.
 * @return The smaller integer.
 */
int findMin(int val1, int val2) {
    if (val1 < val2) return val1;
    return val2;
    /*
    You can also use this:
    return min(val1, val2);
    */
}

/**
 * Find the minimum double.
 * 
 * @param val1 The first value.
 * @param val2 The second value.
 * @return The smaller double.
 */
double findMin(double val1, double val2) {
    if (val1 < val2) return val1;
    return val2;
    /*
    You can also use this:
    return min(val1, val2);
    */
}

/**
 * Generate a random integer within the specified range.
 * 
 * @return The random integer generated.
 */
int randomInt(int min, int max) {
    return (rand() % (max - min + 1)) + min;
}

int main() {
    srand(time(0));
    
    //Generate a random number from 1 to 1000.
    int randomNum = randomInt(1, 1000);

    //Print the random number generated.
    cout << "Random Number: " << randomNum << '\n';

    //Assign the random generated number to the max and min variables.
    int max = randomNum, min = randomNum;

    //Using a for-loop, iterate 9 times the following code.
    for (int i = 0; i<9; i++) {
        //Generate a random number from 1 to 1000.
        int randInteger = randomInt(1, 1000);
        
        //Print the generated number.
        cout << randInteger << ' ';

        //Using the findMax and findMin functions, find the maximum and minimum values.
        max = findMax(randInteger, max);
        min = findMin(randInteger, min);
    }
    cout << '\n';

    //Print the maximum and minimum numbers among the numbers randomly generated.
    cout << "Maximum Number: " << max << '\n';
    cout << "Minimum Number: " << min << '\n';
}