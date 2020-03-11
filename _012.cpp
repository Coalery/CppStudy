#include <iostream>

using namespace std;

int SmallNum(int, int);

int main() {
    cout << SmallNum(5, 3) << endl;
    cout << SmallNum(10, 17) << endl;
    return 0;
}

int SmallNum(int num1, int num2) {
    if(num1 > num2) return num1;
    return num2;
}