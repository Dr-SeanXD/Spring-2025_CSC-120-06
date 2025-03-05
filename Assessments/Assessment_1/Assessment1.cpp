/*
 * @Author       : Sean Lin
 * @Date Created : Feb. 26th, 2025
 * @File Name    : Assessment1.cpp
 * @Project      : Assessment 1 - Chapters 1 and 2
 * @Description  : Stores the price of each item into double variables and calculates the tax of those
 *                 items. After calculating the average cost of these items, print the information 
 *                 down to 2 decimal places because they're money.
 */

//Include the iostream file for cin and cout.
#include <iostream>

//Include the iomanip file for setprecision.
#include <iomanip>

//Specifying to use the std library.
using namespace std;

//Entry point of the program.
int main() {
    //Declare and assign the name, prices of each item, number of items, and the tax into variables.
    const string name = "Tracy Chou";
    const double ink = 67.19, earbuds = 299, cable = 23, drink = 1.98;
    const int numItem = 4;
    const double tax = 0.0625;

    //Declare and calculate the subtotal of the items.
    const double subtotal = ink + earbuds + cable + drink;

    /*
    Declare and calculate the tax owed. The drink is subtracted from the calculation since the
    instruction specifies that the purchaser is charged tax on everything "except the energy drink."
    */
    const double taxOwed = (subtotal - drink) * tax;

    //Calculating the total owed money by adding the subtotal and tax owed together.
    const double totalOwed = subtotal + taxOwed;

    //Calculating the average cost of the items.
    const double averageCost = subtotal / numItem;

    /*
    Using the setprecision function from the iomanip file, the double variables printed will be
    printed down to 2 decimal places because they're money.
    */
    cout << fixed << setprecision(2);

    //Printing the name of the purchaser and the cost of each item.
    cout << "Name: " << name << '\n';
    cout << "Cost of ink: " << ink << '\n';
    cout << "Cost of earbuds: " << earbuds << '\n';
    cout << "Cost of cable: " << cable << '\n';
    cout << "Cost of energy drink: " << drink << '\n';

    //Printing the subtotal, tax owed, total owed, and the average cost.
    cout << "Subtotal: " << subtotal << '\n';
    cout << "Tax owed: " << taxOwed << '\n';
    cout << "Total owed: " << totalOwed << '\n';
    cout << "Average cost: " << averageCost << '\n';

    return 0;
}