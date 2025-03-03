/*
 * @Author       : Sean Lin
 * @Date Created : Mar. 3rd, 2025
 * @File Name    : logical_operator.cpp
 * @Description  : Demonstrates the usage of logical operators.
 */

#include <iostream>
using namespace std;

int main() {

    char employed = 'Y', recentGrad = 'Y';

    if (employed == 'Y' && recentGrad == 'Y') {
        cout << "Qualified for special interest rate.\n";
    }
    else {
        cout << "Not qualified for special interest rate.\n";
    }
    
    return 0;
}