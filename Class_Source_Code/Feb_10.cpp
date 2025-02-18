/*
 * @Author       : Sean Lin
 * @Date Created : Feb. 10th, 2025
 * @File Name    : Feb_10.cpp
 * @Description  : Illustrating the usage of endl, why we put "using namespace std;", and what
 *                 pre-processor does.
 */

//Preprocessor: merges another file into this one before it's compiled.
// <> means the file exists in the system folder.
#include <iostream>

using namespace std;

int main() {
    cout << "Programming is" << endl;
    cout << "fun" << endl;

    //Add 10 and 5.
    cout << 10 + 5 << endl;

    //Literal string --> only print "10 + 5" with no calculation.
    cout << "10 + 5" << endl;

    //Declaration + Assignment.
    int num1 = 10, num2 = 5;

    //Declaration.
    int sum;

    //Assignment --> Assigning a value to the variable(s).
    sum = num1 + num2;

    cout << num1 << " + " << num2 << " = " << sum << endl;

    return 0;
}