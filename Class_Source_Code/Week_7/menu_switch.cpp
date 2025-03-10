/*
 * @Author       : Sean Lin
 * @Date Created : Mar. 10th, 2025
 * @File Name    : menu.cpp
 * @Description  : A simple calculator that demonstrates how menus work, switch statement, and flags.
 */

#include <iostream>
using namespace std;

int main() {

    //Declare two double variables that will store the user inputs.
    double num1, num2;
    
    //An integer that will store what operation the user wants to do.
    int op;

    //Welcome message.
    cout << "Welcome to C++ Calculator!\n";

    //Ask the user to input the first number of the operation.
    cout << "Enter the first number: ";
    cin >> num1;

    //Ask the user to input the second number of the operation.
    cout << "Enter the second number: ";
    cin >> num2;

    //List the menus for the user to choose which operation to do.
    cout << "1 for addition.\n";
    cout << "2 for substraction.\n";
    cout << "3 for multiplication.\n";
    cout << "4 for division.\n";

    //Ask the user to input a number that represents an operation listed above.
    cout << "Enter the operator: ";
    cin >> op;

    //Delcare a double variable that will store the result of the calculation.
    double result;

    //See if the operation is valid or not.
    bool valid = true;

    //Represents the operator the user chose.
    char charOp;

    //Using a switch statement, do the calculation.
    switch (op) {
        case 1:
            result = num1 + num2;
            charOp = '+';
            break;
        case 2:
            result = num1 - num2;
            charOp = '-';
            break;
        case 3:
            result = num1 * num2;
            charOp = '*';
            break;
        case 4:
            if (num2 == 0) {
                //The operation is invalid.
                valid = false;
                cout << "Divisor cannot be 0!\n";
            }
            else {
                result = num1 / num2;
                charOp = '/';
            }
        default:
            //The operation is invalid.
            valid = false;
            cout << "Invalid number (operator).\n";
    }

    if (valid) {
        cout << num1 << " " << charOp << " " << num2 << " = " << result << '\n';
    }

    return 0;
}