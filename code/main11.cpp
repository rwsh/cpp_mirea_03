#include <iostream>
#include <string>
using namespace std;

class TError: public exception {
public:
    TError(double a, double b, double c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    const char* what() const noexcept override {
        string msg = "\n\nThe equation: " + to_string(a) +"x^2 + "+to_string(b)+"x + "+to_string(c)+" = 0 has not solutions\n\n";
        return msg.c_str();
    }
private:
    double a, b, c;
    char buffer[255];
};

int main() {
    double a = 2, b = 3, c = 10;
    try {
        if ((b*b - 4.0*a*c) < 0) {
            throw TError(a, b, c);
        }
    } catch (exception& ex) {
        cout << "\n\nError: "<< ex.what() << "\n\n";
    }
    
    return 0;
}


