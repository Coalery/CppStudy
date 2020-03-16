#include <iostream>

using namespace std;

int increase(int n) {
    if(n < 0) throw n;
    else if(n == 0) throw "0은 입력할 수 없습니다.";
    return n+1;
}

int main(int argc, char* argv[]) {
    int num;

    cout << "양의 정수 하나를 입력해주세요: ";
    while(cin >> num) {
        try {
            cout << increase(num) << endl;
        } catch(int input) {
            cout << input << "은 양의 정수가 아닙니다." << endl;
            cout << "양의 정수를 다시 입력해주세요.";
            continue;
        } catch(const char* st) {
            cout << st << endl;
            cout << "양의 정수를 다시 입력해주세요.";
            continue;
        }
        break;
    }
    return 0;
}