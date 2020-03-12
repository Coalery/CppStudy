#include <iostream>

using namespace std;

struct Book {
    string title;
    string author;
    int price;
};

void Swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void Swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void printBook(const Book book) {
    cout << "Title : " << book.title << endl;
    cout << "Author : " << book.author << endl;
    cout << "Price : " << book.price << endl;
}

int main() {
    int a = 2, b = 4;
    cout << "a : " << a << ", b : " << b << endl;
    Swap(&a, &b);
    cout << "a : " << a << ", b : " << b << endl;
    Swap(a, b);
    cout << "a : " << a << ", b : " << b << endl;

    Book book = {"C++", "Coalery", 10000};
    printBook(book);
    return 0;
}