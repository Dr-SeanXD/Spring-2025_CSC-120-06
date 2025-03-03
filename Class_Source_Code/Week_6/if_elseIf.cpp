/*
 * @Author       : Sean Lin
 * @Date Created : Mar. 3rd, 2025
 * @File Name    : Mar_3.cpp
 * @Description  : Demonstrates if and else if statements.
 */

#include <iostream>
using namespace std;

int main() {
    int score = 90;

    if (score >= 90) {
        cout << "A\n";
    }

    else if (score >= 80) {
        cout << "B\n";
    }

    else if (score >= 70) {
        cout << "C\n";
    }

    else if (score >= 60) {
        cout << "D\n";
    }

    else {
        cout << "F\n";
    }

    return 0;
}