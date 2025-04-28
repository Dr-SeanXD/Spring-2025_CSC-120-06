/*
 * @Author       : Sean Lin
 * @Date Created : Apr. 28th, 2025
 * @File Name    : Topic7_Lab2_Solution_Sean.cpp
 * @Project      : Topic 7 Lab 2
 * @Description  : Create an integer array that can hold 10 integers, store random integers inside them,
 *                 and print all elements inside the array.
 */

#include <iostream>
using namespace std;

//Prototypes of the functions.
int randBetween(int, int);
void storeElements(int, int);
void printArray(int, int);

/**
 * Generate a random number between the specified range and return it.
 * 
 * @param MIN The minimum number for the random integer.
 * @param MAX The maximum number for the random integer.
 * @return The random generated number.
 */
int randBetween(const int MIN, const int MAX) {
    return rand() % (MAX - MIN + 1) + MIN;
}

/**
 * Store elements into the array passed in.
 * 
 * @param nums The array that its elements will be stored.
 * @param SIZE The size of the array.
 */
void storeElements(int nums[], const int SIZE) {
    for (int i = 0; i<SIZE; i++) {
        nums[i] = randBetween(-100, 100);
    }
}

/**
 * Print the elements inside the array.
 * 
 * @param nums The array that its elements inside will be printed.
 * @param SIZE The size of the array.
 */
void printArray(int nums[], const int SIZE) {
    for (int i = 0; i<SIZE; i++) {
        cout << *(nums + i) << ' ';
    }
    cout << '\n';
}

/**
 * Entry point (driver function) of the program.
 */
int main() {
    srand(time(0));

    //Declare a constant integer that means the size of the array.
    const int SIZE = 10;

    //Declare an integer array with the SIZE integer.
    int nums[SIZE];

    //By calling the storeElements() function, store random values into the array.
    storeElements(nums, SIZE);

    //By calling the printArray() function, print the elements inside of the array.
    cout << "Elements in the array: \n";
    printArray(nums, SIZE);

    return 0;
}