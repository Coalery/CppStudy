#include <iostream>

using namespace std;

// Condition

int main() {
    int input;
    cin >> input;
    
    if(input > 5)
        cout << "�Է°��� 5 ���� Ů�ϴ�." << endl;
    else if(input == 5)
        cout << "�Է°��� 5 �Դϴ�." << endl;
    else
        cout << "�Է°��� 5 ���� �۽��ϴ�." << endl;
    
    switch(input) {
        case 1:
            cout << "�Է°��� 1 �Դϴ�." << endl;
            break;
        case 2:
            cout << "�Է°��� 2 �Դϴ�." << endl;
            break;
        case 3:
            cout << "�Է°��� 3 �Դϴ�." << endl;
            break;
        case 4:
            cout << "�Է°��� 4 �Դϴ�." << endl;
            break;
        default:
            cout << "������ ������ϴ�." << endl;
            break;
    }
    return 0;
}