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

    cout << "계산할 숫자를 알려주세요! : ";
    cin >> a >> b;
    cout << "원하는 연산자를 알려주세요! : ";
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
        cout << "연산의 결과! : " << calculate(a, b, calc) << endl;
    else
        cout << "연산자가 존재하지 않아요!" << endl;
}

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) {
    if(b == 0) return 0.0;
    return a / b;
}

double calculate(double a, double b, CalcType type) { return type(a, b); }