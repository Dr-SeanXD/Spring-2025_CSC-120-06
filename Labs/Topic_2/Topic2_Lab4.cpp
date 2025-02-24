/*
 * @Author       : Sean Lin
 * @Date Created : Feb. 24th, 2025
 * @File Name    : topic_2_lab_4.cpp
 * @Project      : Topic 2 Lab 4
 * @Description  : Showcase how data types (string and double) and division between double data types work.
 */

#include <iostream>
using namespace std;

//Entry point of the program.
int main() {
    //Store values into string variables.
    string name = "Sean Lin";
    string food = "apple";

    //Store the current class's and the maximum credit into double variables.
    double classCredit = 4;
    double maxCredit = 18;

    //Calculate the percentage using division and store the result into a double variable.
    double percent = classCredit/maxCredit * 100;

    //Output the name and food.
    cout << "My name is " << name << endl;
    cout << "My favorite food is " << food << endl;

    //Output the number of class credits for this class, maximum credits, and the percentage.
    cout << "This course is " << classCredit << " credit(s) of " << maxCredit << " credits maximum or "
         << percent << '%' << " of all the credits";

    return 0;
}