#include <iostream>
#include <iomanip>

using namespace std;

// Array

int main() {
    int sum = 0;
    int arr[3] = {11, 51, 17};
    for(int i=0; i<3; i++)
        sum += arr[i];
    cout << sum << endl;
    cout << "length : " << sizeof(arr) / sizeof(arr[0]) << endl;
    
    int arr_col_len, arr_row_len;
    int arr2[][4] = {
        {10, 20},
        {30, 40, 50, 60},
        {0, 0, 70, 80}
    };

    arr_col_len = sizeof(arr2[0]) / sizeof(arr2[0][0]);
    arr_row_len = (sizeof(arr2) / arr_col_len) / sizeof(arr2[0][0]);

    for(int i=0; i<arr_row_len; i++) {
        for(int j=0; j<arr_col_len; j++) {
            cout << setw(4) << arr2[i][j];
        }
        cout << endl;
    }

    return 0;
}