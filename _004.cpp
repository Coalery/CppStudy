#include <iostream>

using namespace std;

// Constant

int main() {
    int a = 10;
    
    cout << dec;
    cout << "10진수 : " << a << endl;

    cout << oct;
    cout << "8진수 : " << a << endl;

    cout << hex;
    cout << "16진수 : " << a << endl;

    auto b = 0b010111;
    cout << b << endl;

    const int c = 30;
    cout << c << endl;

    return 0;
}