#include <iostream>
#include <cmath>
using namespace std;

double calc(int a, int b) {
    double c;
    if (b != 0) {
        c = a / b;
    } else {
        throw "Division by zero!";    
    }
    if (c < 0) {
        throw c;
    } else {
        return sqrt(c);
    }
}

int main() {
    cout << "\n\nStart the calculation...\n\n";
    try {
        cout << calc(6, -3);
    } catch(const char* error_message) {
        cout << error_message << "\n\n";
    } catch(double y) {
        cout << "Negative: " << y << "\n\n";
    }

    cout << "\n... Stop the calculation.\n\n";

    return 0;
}




