/*
 * @Author       : Sean Lin
 * @Date Created : Apr. 28th, 2025
 * @File Name    : Topic7_Reading_Assignment_Solution_Sean.cpp
 * @Project      : Topic 7 Reading Assignment
 * @Description  : Dealing with arrays.
 */

#include <iostream>
#include <fstream>
using namespace std;

//Prototypes of the functions.
int randomInt(int, int);
void fillArray(int, int, int, int);
int minValue(int, int);
int maxValue(int, int);
int arraySum(int, int);
void printArray(int, int, ostream);


/**
 * Generate a random number between the specified range and return it.
 * 
 * @param MIN The minimum number for the random integer.
 * @param MAX The maximum number for the random integer.
 * @return The random generated number.
 */
int randomInt(const int MIN, const int MAX) {
    return rand() % (MAX - MIN + 1) + MIN;
}

/**
 * Fill the array with random numbers with specified range.
 * 
 * @param nums The array that will be filled.
 * @param SIZE The size of the array.
 * @param MIN The minimum range of the random numbers.
 * @param MAX The maximum range fo the random numbers.
 */
void fillArray(int nums[], const int SIZE, const int MIN, const int MAX) {
    for (int i = 0; i<SIZE; i++) {
        nums[i] = randomInt(MIN, MAX);
    }
}

/**
 * Find the minimum value inside the given array.
 * 
 * @param nums The array that its minimum value will be found.
 * @param SIZE The size of the array.
 * @return The minimum value in the array.
 */
int minValue(int nums[], const int SIZE) {
    int min = nums[0];
    for (int i = 0; i<SIZE; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }
    return min;
}

/**
 * Find the maximum value inside the given array.
 * 
 * @param nums The array that its maximum value will be found.
 * @param SIZE The size of the array.
 * @return The maximum value in the array.
 */
int maxValue(int nums[], const int SIZE) {
    int max = nums[0];
    for (int i = 0; i<SIZE; i++) {
        if (nums[i] > max) {
            max = nums[i];
        }
    }
    return max;
}

/**
 * Sums up all the numbers in the array given.
 * 
 * @param nums The array that its sum will be found.
 * @param SIZE The size of the array.
 * @return The sum of all values inside of the given array.
 */
int arraySum(int nums[], const int SIZE) {
    int sum = 0;
    for (int i = 0; i<SIZE; i++) {
        sum += nums[i];
    }
    return sum;
}

/**
 * Print the numbers inside the given array to the ostream given.
 * 
 * @param nums The array that its values will be printed.
 * @param SIZE The size of the array.
 * @param ostream Where the values will be printed.
 */
void printArray(int nums[], const int SIZE, ostream& os) {
    for (int i = 0; i<SIZE; i++) {
        os << nums[i] << ' ';
    }
    os << '\n';
}

/**
 * Entry point (driver function) of the program.
 */
int main() {
    //Declare a constant integer representing the size of the array.
    const int SIZE = 50;

    //Declare an integer array that its size is defined above.
    int nums[SIZE];

    //Call the fillArray() function to fill the array with random numbers from -75 to 200.
    fillArray(nums, SIZE, -75, 200);

    /*
    Call the printArray() function by passing in cout as parameter to print the values inside the array
    to the console.
    */
    printArray(nums, SIZE, cout);

    //Declare an ofstream to write things into "Sean.txt".
    ofstream outFile("Sean.txt");

    /*
    Call the printArray() function by passing in outFile as parameter to print the values inside the array
    to the txt file.
    */
    printArray(nums, SIZE, outFile);

    //Print the minimum value, maximum value, sum, and average of the array.
    cout << "Minimum number: " << minValue(nums, SIZE) << '\n';
    cout << "Maximum number: " << maxValue(nums, SIZE) << '\n';
    cout << "Sum: " << arraySum(nums, SIZE) << '\n';
    cout << "Average: " << double(arraySum(nums, SIZE)) / SIZE << '\n';

    return 0;
}