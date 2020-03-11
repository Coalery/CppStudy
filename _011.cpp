#include <iostream>

using namespace std;

struct Book {
    string title;
    string author;
    int price;
};

union UnionTest {
    short a;
    int b;
    long c;
};

enum EnumTest {
    A = 10,
    B = 20,
    C = 30
};

int main() {
    Book book1 = {"C++ Study", "Coalery", 10000};
    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.price << endl;

    UnionTest unionTest;
    unionTest.a = 10;

    cout << unionTest.a << endl;
    cout << unionTest.b << endl;
    cout << unionTest.c << endl;

    EnumTest enumTest;
    enumTest = EnumTest::A;
    cout << enumTest << endl;
    return 0;
}