/*
 * @Author       : Sean Lin
 * @Date Created : May 5th, 2025
 * @File Name    : Topic7_Lab3_Solution_Sean.cpp
 * @Project      : Topic 7 Lab 3
 * @Description  : Reads from a file that contains multiple numbers. Input those numbers into an array,
 *                 and find the minimum number within those numbers.
 */

#include <iostream>
#include <fstream>
using namespace std;

/**
 * Input the numbers from the given text file into an array, and return how many numbers there are in the
 * text file.
 * 
 * @param nums The array that will be inputted with the numbers inside the text file.
 * @param fileName The file name that the function will read from.
 * @return How many numbers there are in the text file.
 */
int inputNumber(double nums[], const string fileName) {
    //Using an ifstream, read from the file in which its name is defined above as a constant string.
    ifstream inFile(fileName);

    //If the file isn't found, then print an error message and return 0.
    if (!inFile) {
        cout << fileName << " not found.\n";
        return 0;
    }

    //Initializes a count variable to 0 to count how many numbers there are in the text file.
    int count = 0;

    //Input all numbers from the text file into the array.
    while (inFile >> nums[count]) {
        count++;
    }

    return count;
}

/**
 * Output the minimum number inside the array given.
 * 
 * @param nums The array that its minimum number will be found.
 * @param SIZE How many numbers there are in the array.
 */
void findMin(double nums[], const int SIZE) {
    //If the SIZE is 0, that means there's nothing inside the text file. Therfore, print an error message.
    if (SIZE == 0) {
        cout << "No number in file.\n";
    }

    //If there is something, find the minimum number using a for-loop and print it.
    else {
        double min = nums[0];
        for (int i = 0; i<SIZE; i++) {
            if (nums[i] < min) {
                min = nums[i];
            }
        }
        cout << "Minimum number: " << min << '\n';
    }
}

/**
 * Entry point of the program (driver function).
 */
int main() {
    //Declare constant variables that holds the size of the array and the file name that'll be read.
    const int SIZE = 30;
    const string fileName = "doubles.txt";

    //Declare a double array using the constant SIZE variable declared above.
    double nums[SIZE];

    /*
    By calling the inputNumber() function, it'll read in numbers from the text file and return how many
    numbers there are in the text file.
    */
    const int count = inputNumber(nums, fileName);

    //By calling the findMin() function, it'll look for the minimum number inside the array given.
    findMin(nums, count);

    return 0;
}