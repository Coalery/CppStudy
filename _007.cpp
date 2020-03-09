#include <iostream>

using namespace std;

// Loop

int main() {
    int i, num;
    cin >> num;

    cout << "while" << endl;
    while(i < num) {
        cout << i+1 << endl;
        i++;
    }
    cout << i << endl;

    cout << "do-while" << endl;
    do {
        cout << i+1 << endl;
        i++;
    } while(false);
    cout << i << endl;

    cout << "for" << endl;
    for(i=0; i<num; i++)
        cout << i << endl;
    cout << i << endl;

    cout << "Range-based for loop" << endl;
    int arr[5] = {1, 3, 5, 7, 9};
    for(int element : arr)
        cout << element << endl;

    cout << "continue" << endl;
    for(i = 0; i <= 100; i++) {
        if(i % 2 == 0) continue;
        cout << i << endl;
    }

    cout << "break" << endl;
    int from = 1, to = 10, sum = 0;
    while(true) {
        sum += from;
        if(from == to) break;
        from++;
    }
    cout << sum << endl;

    return 0;
}