#include <iostream>
using namespace std;

int main() {
    long double a = 0;
    int value = 0, sum = 0;
    cout << "Hello C++ World!" << endl;
    while (cin >> value) {
        sum += value;
        cout << "Hi";
    }
    cout << endl;

    cout << sum << endl;
    cout << sizeof(a) << endl;
    return 0;
}