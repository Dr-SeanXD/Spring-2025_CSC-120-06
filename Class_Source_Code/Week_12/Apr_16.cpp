/*
 * @Author       : Sean Lin
 * @Date Created : Apr. 16th, 2025
 * @File Name    : Apr_16.cpp
 * @Description  : Using a function, swap two integers.
 */

#include <iostream>
using namespace std;

//Function prototype/function declaration.
void swap(int&, int&);

/**
 * Swap two integers given by using a temporary variable. This works by passing in the address/reference 
 * in memory of the variables.
 * 
 * @param x The first integer.
 * @param y The second integer.
 */
void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int x = 10;
    int y = 20;

    //Printing the location of x and y in memory.
    cout << "The address of x is: " << &x << '\n';
    cout << "The address of y is: " << &y << '\n';

    cout << "Before swap, x = " << x << ", y = " << y << '\n';

    //By calling the swap, we're passing in the reference to x and y.
    swap(x, y);

    cout << "After swap, x = " << x << ", y = " << y << '\n';

    return 0;
}