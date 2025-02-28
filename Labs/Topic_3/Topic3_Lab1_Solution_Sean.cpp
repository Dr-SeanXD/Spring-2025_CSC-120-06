/*
 * @Author       : Sean Lin
 * @Date Created : Feb. 26th, 2025
 * @File Name    : Topic3_Lab1.cpp
 * @Project      : Topic 3 Lab 1
 * @Description  : Asks the user how many boxes to make, and calculates how many 3" wood and 5.25" wood
 *                 are needed to generate the amount of boxes the user specified.
 */

//Include the iostream file for cin and cout.
#include <iostream>

//Include the iomanip file for setprecision in printing.
#include <iomanip>

//Specifying to use the std library.
using namespace std;

//Entry point of the program.
int main() {
    //Declare and assign the width, length, and height for the box.
    const double width = 5.25, length = 7.5, height = 3;

    //Declare and assign how many 3" wood is needed to make one box.
    const double wood3 = (2 * width) + (2 * length);

    //Declare and assign how many 5.25" wood is needed to make one box.
    const double wood5_25 = length;

    /*
    Declare a variable that will store how many boxes the user wants to make, which will be
    inputted below using cin. The integer is unsigned because the number of boxes cannot be a
    negative number.
    */
    unsigned int totalBox;

    //Ask the user how many boxes they want to make.
    cout << "How many boxes are you making: ";

    //Input the amount of boxes the user wants to make.
    cin >> totalBox;

    //Declare and calculate the amount of 3" wood that are needed according to the input above.
    const double totalWood3 = wood3 * totalBox;

    //Declare and calculate the amount of 5.25" wood that are needed according to the input above.
    const double totalWood5_25 = wood5_25 * totalBox;

    /*
    Print the amonut of 3" and 5.25" wood needed to make the boxes specified by the user. The
    output is printed to 2 decimal places using the setprecision function from iomanip.
    */
    cout << "You need " << fixed << setprecision(2) << totalWood3 << "\" strip of 3\" wood.\n";
    cout << "You need " << fixed << setprecision(2) << totalWood5_25 << "\" strip of 5.25\" wood.\n";

    return 0; 
}