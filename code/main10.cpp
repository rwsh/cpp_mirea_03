#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a = 2, b = 3, c = 10;
    try {
        if ((b*b - 4.0*a*c) < 0) {
            throw exception();
        }
    } catch (exception& ex) {
        cout << "\n\nError\n\n";
    }
    
    return 0;
}

