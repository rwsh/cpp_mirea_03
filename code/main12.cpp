#include <iostream>
using namespace std;

const int N = 1024;
int* A;

int main() {
    A = new int[N];

    try {
        int n;
        cout << "\n\nEnter n > ";
        cin >> n;
        if ((n < 0)||(n >= N)) {
            throw range_error("\n\nRange error!\n\n");
        }
        A[n] = 10;
    } catch (range_error& ex) {
        cout << ex.what();
    }
    delete A;

    return 0;
}



