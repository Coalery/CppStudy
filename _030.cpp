#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(int argc, char* argv[]) {
    vector<int> vc = {20, 40, 10, 30};

    sort(vc.begin(), vc.end(), greater<int>());
    copy(vc.begin(), vc.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    sort(vc.begin(), vc.end(), less<int>());
    copy(vc.begin(), vc.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    return 0;
}