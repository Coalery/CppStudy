#include <iostream>

using namespace std;

// Constant

int main() {
    int a = 10;
    
    cout << dec;
    cout << "10���� : " << a << endl;

    cout << oct;
    cout << "8���� : " << a << endl;

    cout << hex;
    cout << "16���� : " << a << endl;

    auto b = 0b010111;
    cout << b << endl;

    const int c = 30;
    cout << c << endl;

    return 0;
}