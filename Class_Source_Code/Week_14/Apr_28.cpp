/*
 * @Author       : Sean Lin
 * @Date Created : Apr. 28th, 2025
 * @File Name    : Apr_28.cpp
 * @Description  : Demonstrating how to declare an array and access its data using pointers/references (*).
 */

#include <iostream>
using namespace std;

/**
 * THIS WILL NOT WORK!!!
 */
void printArray(int nums[]) {
    const int SIZE = sizeof(nums) / sizeof(int);

    for (int i = 0; i<SIZE; i++) {
        cout << *(nums + i) << ' ';
    }
    cout << '\n';
}

/**
 * Prints the elements inside of the array given.
 * 
 * @param nums The array that its elements will be printed.
 * @param SIZE The size of the array.
 */
void printArray(int nums[], const int SIZE) {
    //Printing the numbers inside the array using a pointer (*).
    for (int i = 0; i<SIZE; i++) {
        cout << *(nums + i) << ' ';
        //Same as cout << nums[i] << ' ';
    }
    cout << '\n';
}

int main() {
    //Declare the size of the array using a constant integer.
    const int SIZE = 10;
    
    //Declare an integer array.
    int nums[SIZE];

    //Using a for-loop, assign values to the array.
    for (int i = 0; i<SIZE; i++) {
        nums[i] = i * 2;
    }

    cout << "The numbers are: \n";

    printArray(nums, SIZE);

    cout << "Size of array: " << sizeof(nums) / sizeof(int) << '\n';

    return 0;
}