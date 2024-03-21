#include <iostream>
#include <cmath>
using namespace std;

class TCalc {
public:
    double* x;
    TCalc(double x) {
        this->x = new double(x);
    }
    double run() {
        if(*x < 0) {
            throw *x;
        } else {
            return sqrt(*x);
        }
    }
    ~TCalc() {
        delete x;
        cout << "Destructor done!";
    }
};

int main() {
    
    try {
        TCalc Calc = TCalc(-5);
        cout << Calc.run() << "\n\n";
    } catch(double x) {
        cout << "\n\nError: x = " << x << " < 0\n\n";
    }

    return 0;
}




