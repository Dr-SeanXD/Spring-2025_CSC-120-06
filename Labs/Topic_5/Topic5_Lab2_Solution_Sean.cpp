/*
 * @Author       : Sean Lin
 * @Date Created : Apr. 2nd, 2025
 * @File Name    : Topic5_Lab2_Solution_Sean.cpp
 * @Project      : Topic 5 Lab 2
 * @Description  : Write the user's name and 50 random numbers (from 0 ~ 100) into a file, and read them
 *                 back to the console. When reading back to the console, determine the minimum number,
 *                 maximum number, total sum, and average value of the 50 random numbers.
 */

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    //Set the random seed to the current time.
    srand(time(0));
    
    //Declare a constant integer to be the number of random numbers in the file.
    const int NUM_OF_RANDOM_NUMBERS = 50;

    //Declare constant integers of maximum and minimum numbers for the random integers.
    const int MAXIMUM_RANDOM_NUMBER = 100;
    const int MINIMUM_RANDOM_NUMBER = 0;

    //Declare a constant integer for the setw when writing/reading integers.
    const int SET_WIDTH = 4;

    //Declare a constant string storing the user's full name.
    const string NAME = "Sean Lin";

    //Declare a constant string storing the file that will be written and read.
    const string FILE_NAME = "Sean.txt";

    //Using ofstream, open the file with the file name declared above.
    ofstream outFile;
    outFile.open(FILE_NAME);

    //Write the user's full name into the file.
    outFile << NAME << '\n';

    //Using a for-loop, generate random numbers and write them into the file.
    for (int i = 0; i<NUM_OF_RANDOM_NUMBERS; i++) {
        /*
        Using the rand() funciton, generate a random number using the maximum and minimum bounds declared
        above.
        */
        int randomInt = (rand() % (MAXIMUM_RANDOM_NUMBER - MINIMUM_RANDOM_NUMBER + 1)) + 
            MINIMUM_RANDOM_NUMBER;
        
        //Write the random number into the file that was just generated.
        outFile << setw(SET_WIDTH) << randomInt;
    }

    //Close the file after all of the writing.
    outFile.close();

    //Using ifstream, open the file with the file name declared above.
    ifstream inFile;
    inFile.open(FILE_NAME);

    //See if the file exist.
    if (!inFile) {
        cout << FILE_NAME << " does not exist!\n";
    }
    else {
        //Using the getline function, read the first line of the file, which stores the user's full name.
        string fullName;
        getline(inFile, fullName);

        //Print the full name into the console.
        cout << "Full Name: " << fullName << '\n';

        //Initialize the smallest number, largest number, and total sum.
        int smallestNum = MAXIMUM_RANDOM_NUMBER + 1, largestNum = MINIMUM_RANDOM_NUMBER - 1, total = 0;

        //Using a for-loop, read the numbers in the file into the console.
        for (int i = 1; i<=NUM_OF_RANDOM_NUMBERS; i++) {
            //Read a number from the file into the console.
            int num;
            inFile >> num;
            cout << setw(SET_WIDTH) << num << " ";

            //Determine if the current number (just read) is the smallest/largest number.
            smallestNum = min(smallestNum, num);
            largestNum = max(largestNum, num);

            //Add the current number (just read) into the total variable.
            total += num;

            //Go to a new line after 2 outputs.
            if (i % 2 == 0) cout << '\n';
        }

        //Close the file after the reads.
        outFile.close();

        //Calculate the average value using the total sum calculated above.
        double average = double(total) / NUM_OF_RANDOM_NUMBERS;

        //Print out the total sum, minimum number, maximum number, and average value.
        cout << "Total: " << total << '\n';
        cout << "Minimum: " << smallestNum << '\n';
        cout << "Maximum: " << largestNum << '\n';
        cout << "Average: " << average << '\n';
    }

    return 0;
}