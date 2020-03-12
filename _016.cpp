#include "_016.h"
#include <iostream>

using namespace kang;
using namespace std;

void kang::Display() {
    cout << kang::count << endl;
}

int main() {
    kang::count = 5;
    kang::Display();
    return 0;
}