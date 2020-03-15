#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main(int argc, char* argv[]) {
    vector<int> vc = {1, 2, 3, 4, 5};
    
    copy(vc.begin(), vc.end(), ostream_iterator<int>(cout));
    cout << endl;
    copy(vc.begin(), vc.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    copy(vc.rbegin(), vc.rend(), ostream_iterator<int>(cout, " "));
    cout << endl;

    vector<int>::iterator vIterator;
    for(vIterator = vc.begin(); vIterator != vc.end(); vIterator++)
        cout << *vIterator << endl;
    
    return 0;
}