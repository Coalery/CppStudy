#include <iostream>

using namespace std;

// Condition

int main() {
    int input;
    cin >> input;
    
    if(input > 5)
        cout << "입력값이 5 보다 큽니다." << endl;
    else if(input == 5)
        cout << "입력값이 5 입니다." << endl;
    else
        cout << "입력값이 5 보다 작습니다." << endl;
    
    switch(input) {
        case 1:
            cout << "입력값은 1 입니다." << endl;
            break;
        case 2:
            cout << "입력값은 2 입니다." << endl;
            break;
        case 3:
            cout << "입력값은 3 입니다." << endl;
            break;
        case 4:
            cout << "입력값은 4 입니다." << endl;
            break;
        default:
            cout << "범위를 벗어났습니다." << endl;
            break;
    }
    return 0;
}