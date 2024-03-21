#include <iostream>
#include <cmath>
using namespace std;

int calc(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        throw "Division by zero!";    
    }
}

int main() {
    try {
        try {
            cout << calc(0, 0) << "\n\n";
        } catch (int error) {
            cout << "Inner execption: " << error << "\n\n";
        }
        cout << "Inner try-catch finished" << "\n\n";
    } catch (const char* error) {
        cout << "External execption: " << error << "\n\n";
    }
    cout << "External try-catch finished" << "\n\n";
    
    return 0;
}




