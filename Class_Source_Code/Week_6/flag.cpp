#include <iostream>
using namespace std;

int main() {
    //This is a flag.
    bool isCold = true;

    //Don't need == true because isCold is a flag. In this case, this means if isCold is true.
    if (isCold) {
        cout << "It's cold.\n";
    }
    else {
        cout << "It's not cold.\n";
    }

    return 0;
}