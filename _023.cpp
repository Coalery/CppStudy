#include <iostream>

using namespace std;

template <typename T> void Swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <> void Swap<double>(double&, double&) {}

int main(int argc, char* argv[]) {
    int a = 2, b = 3;
    cout << "a : " << a << ", b : " << b << endl;
    Swap(a, b);
    cout << "a : " << a << ", b : " << b << endl;

    char c = 'c', d = 'd';
    cout << "c : " << c << ", d : " << d << endl;
    Swap(c, d);
    cout << "c : " << c << ", d : " << d << endl;

    string e = "c++", f = "java";
    cout << "e : " << e << ", f : " << f << endl;
    Swap(e, f);
    cout << "e : " << e << ", f : " << f << endl;

    double g = 2.3, h = 4.7;
    cout << "g : " << g << ", h : " << h << endl;
    Swap(g, h);
    cout << "g : " << g << ", h : " << h << endl;
    return 0;
}