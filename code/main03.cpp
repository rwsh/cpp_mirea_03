#include <iostream>
using namespace std;

int calc(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        throw "Division by zero!";    
    }
}

int main() {
    cout << "\n\nStart the calculation...\n\n";
    try {
        cout << calc(6, 0);
    } catch(...) {
        cout << "Error!\n\n";
    }
    cout << "\n... Stop the calculation.\n\n";

    return 0;
}




