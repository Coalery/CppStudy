#include <iostream>

// Operator

using namespace std;

int main() {
    int a = -1;
    int b = -1;

    cin >> a;
    cin >> b;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;

    int num1 = 2;
    int num2 = 5;
    int num3 = num1 + num2;
    int num4 = 6;
    num4 += 7;
    
    cout << num3 << ", " << num4 << endl;

    num3++;
    num4--;

    cout << num3 << ", " << num4 << endl;

    cout << (num1 != num2) << endl;
    cout << (num1 > num2) << endl;
    
    return 0;
}