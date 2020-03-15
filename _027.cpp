#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <iterator>

using namespace std;

int main(int argc, char* argv[]) {
    vector<int> ve = {1, 5, 2, 3, 4, 2, 4, 3};
    ve.push_back(7);
    copy(ve.begin(), ve.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    deque<int> de = {1, 5, 2, 3, 4, 2, 4, 3};
    de.push_back(4);
    de.push_front(7);
    cout << de.front() << endl;
    de.pop_front();
    copy(de.begin(), de.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    list<int> li = {1, 5, 2, 3, 4, 2, 4, 3};
    li.push_back(4);
    li.push_front(7);
    li.sort();
    li.unique();
    copy(li.begin(), li.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    forward_list<int> fl = {1, 5, 2, 3, 4, 2, 4, 3};
    fl.push_front(5);
    cout << fl.front() << endl;
    copy(fl.begin(), fl.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
 
    return 0;
}