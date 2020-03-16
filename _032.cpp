#include <iostream>

using namespace std;

int increase(int n) {
    if(n < 0) throw n;
    else if(n == 0) throw "0�� �Է��� �� �����ϴ�.";
    return n+1;
}

int main(int argc, char* argv[]) {
    int num;

    cout << "���� ���� �ϳ��� �Է����ּ���: ";
    while(cin >> num) {
        try {
            cout << increase(num) << endl;
        } catch(int input) {
            cout << input << "�� ���� ������ �ƴմϴ�." << endl;
            cout << "���� ������ �ٽ� �Է����ּ���.";
            continue;
        } catch(const char* st) {
            cout << st << endl;
            cout << "���� ������ �ٽ� �Է����ּ���.";
            continue;
        }
        break;
    }
    return 0;
}