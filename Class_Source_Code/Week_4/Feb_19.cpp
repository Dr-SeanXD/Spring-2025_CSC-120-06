/*
 * @Author       : Sean Lin
 * @Date Created : Feb. 19th, 2025
 * @File Name    : Feb_19.cpp
 * @Description  : Demonstrates properties of boolean (bool) in C++ and the sizeof() function.
 *                 Shows how many bytes in each data type.
 */

#include <iostream>
using namespace std;

int main() {

    bool isHappy = true;

    //As long as the number isn't 0, the value is true.
    bool isNotHappy = 0;

    cout << "Happy? " << isHappy << endl;

    cout << "Not Happy? " << isNotHappy << endl;

    int x = 10;

    cout << "Size of int: " << sizeof(x) << " Bytes" << endl;

    float y = 1.0;

    cout << "Size of float: " << sizeof(y) << " Bytes" << endl;

    double z = 10.011;

    cout << "Size of double: " << sizeof(z) << " Bytes" << endl;

    char a = 'a';

    cout << "Size of char: " << sizeof(a) << " Byte" << endl;

    bool b = true;

    cout << "Size of bool: " << sizeof(b) << " Byte" << endl;


    //Everything is positive.
    unsigned int age = INT_MAX;

    age = age + 10;

    cout << "Age: " << age << endl;

    return 0;
}