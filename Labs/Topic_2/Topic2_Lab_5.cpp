/*
 * @Author       : Sean Lin
 * @Date Created : Feb. 24th, 2025
 * @File Name    : Topic2_Lab_5.cpp
 * @Project      : Topic 2 Lab 5
 * @Description  : This program stores three integers and calculates their average value. Also, it 
 *                 demonstrates the how mod (%) works.
 */

#include <iostream>
using namespace std;

//Entry point of the program.
int main() {
    //Stores 3 integers into 3 separate variables.
    int a = 1, b = 5, c = 7;

    //Calculate the average value.
    double average = double(a + b + c) / 3;

    //Declare the integer mod.
    int mod;

    //Calculate the mod of a and b. Then, print it.
    mod = a % b;
    cout << a << " % " << b << " = " << mod << endl;

    //Calculate the mod of a and c. Then, print it.
    mod = a % c;
    cout << a << " % " << c << " = " << mod << endl;

    //Calculate the mod of b and c. Then, print it.
    mod = b % c;
    cout << b << " % " << c << " = " << mod << endl;

    //Print the average value.
    cout << "Average: " << average << endl;

    return 0;
}