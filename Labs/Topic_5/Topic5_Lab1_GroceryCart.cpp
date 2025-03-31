/*
 * @Author       : Sean Lin
 * @Date Created : Mar. 31st, 2025
 * @File Name    : Topic5_Lab1_GroceryCart.cpp
 * @Project      : Topic 5 Lab 1 - Grocery Cart
 * @Description  : The program asks the user to enter the number of items in the grocery cart, which has
 *                 to be a "reasonable" (valid) number. If the number is invalid, the program will keep
 *                 asking until the user enters a valid (reasonable) number. Then, the program will ask the
 *                 the user to enter the price for each item. Again, the program will keep asking the user
 *                 the price until the user enters a reasonable (valid) price.
 */

#include <iostream>
using namespace std;

int main() {

    /*
    The choice of using a do-while loop is the fact that it guarantees that this loop will be run at least
    1 time. The loop is asking the user to enter the number of items in the grocery cart, which will keep
    running until the user enters a readonable number.
    */
    int numItem;
    do {
        cout << "Enter the number of items: ";
        cin >> numItem;

        //Prints out error message(s) for invalid inputs.
        if (numItem <= 0) {
            cout << "Invalid number. Please enter again!\n";
        }

        if (numItem > 5) {
            cout << "Too many items. Please enter again!\n";
        }

    } while (numItem <= 0 || numItem > 5);

    //Declaring a double variable to store the total price.
    double totalPrice = 0;

    /*
    The choice to use a for-loop here is because the program now knows how many times it needs to ask the
    user the price of each item after asking how many items there are in the grocery cart.
    */
    for (int i = 1; i<=numItem; i++) {
        //This is asking the price of each item in the grocery cart.
        double price;

        /*
        The choice of using a do-while loop here is again due to the fact that the user must enter a valid
        (reasonable) price, such as a non-negative number, and do-while guarantees 1 time of execution.
        */
        do {
            cout << "Enter the price for item " << i << ": ";
            cin >> price;

            //Prints out error message(s) for invalid inputs.
            if (price <= 0) {
                cout << "Invalid price. Please enter again!\n";
            }

        }while (price <= 0);

        //Add the price to the total price.
        totalPrice += price;
    }

    //Print out the total price.
    cout << "Total Price: " << totalPrice << '\n';
    
    return 0;
}