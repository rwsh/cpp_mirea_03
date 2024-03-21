#include <iostream>
using namespace std;

int calc(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Division by zero!\n\n";
        return 0;
    }
    
}

int main() {

    cout << "\n\nStart the calculation...\n\n";

    cout << calc(6, 0);

    cout << "\n... Stop the calculation.\n\n";

    return 0;
}




