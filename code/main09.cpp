#include <iostream>
#include <cmath>
using namespace std;

class TError {
public:
    TError(double a, double b, double c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    void message() {
        cout << "\n\nThe equation: " << a << "x^2 + " << b << "x + " << c << " = 0 has not solutions\n\n";
    }
private:
    double a, b, c;
};


int main() {
    double a = 2, b = 3, c = 10;
    try {
        if ((b*b - 4.0*a*c) < 0) {
            throw TError(a, b, c);
        }
    } catch (TError& error) {
        error.message();
    }
    
    return 0;
}




