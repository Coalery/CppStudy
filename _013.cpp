#include <iostream>

using namespace std;

typedef double (*CalcType)(double, double);

double add(double, double);
double subtract(double, double);
double multiply(double, double);
double divide(double, double);

double calculate(double, double, CalcType);

int main(int argc, char* argv[]) {
    CalcType calc = nullptr;
    
    char oper;
    int a, b;

    cout << "����� ���ڸ� �˷��ּ���! : ";
    cin >> a >> b;
    cout << "���ϴ� �����ڸ� �˷��ּ���! : ";
    cin >> oper;

    switch(oper) {
        case '+':
            calc = add;
            break;
        case '-':
            calc = subtract;
            break;
        case '*':
            calc = multiply;
            break;
        case '/':
            calc = divide;
            break;
    }
    if(calc != nullptr)
        cout << "������ ���! : " << calculate(a, b, calc) << endl;
    else
        cout << "�����ڰ� �������� �ʾƿ�!" << endl;
}

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) {
    if(b == 0) return 0.0;
    return a / b;
}

double calculate(double a, double b, CalcType type) { return type(a, b); }