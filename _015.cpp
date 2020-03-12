#include <iostream>

using namespace std;

int hi(int a, int b, char c = 'a', int d = 7) {
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;
    cout << "d : " << d << endl;
}

int main() {
    hi(1, 2);
    hi(1, 2, 'b');
    hi(1, 2, 'd', 3);
    return 0;
}