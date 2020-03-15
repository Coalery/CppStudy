#include <iostream>
#include <iterator>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;

int main(int argc, char* argv[]) {
    int arr[5] = {10, 20, 30, 40, 50};
    set<int> st(arr, arr+3);
    copy(st.begin(), st.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    st.insert(60);
    st.insert(70);
    st.erase(20);
    copy(st.begin(), st.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    map<string, int> mp;
    mp.insert(pair<string, int>("국어", 80));
    mp["수학"] = 100;

    map<string, int>::iterator it;
    for(it = mp.begin(); it != mp.end(); it++)
        cout << it->first << " : " << it->second << endl;
    
    unordered_map<string, int> un_mp;
    un_mp.insert(pair<string, int>("국어", 80));
    un_mp["수학"] = 100;

    unordered_map<string, int>::iterator un_it;
    for(un_it = un_mp.begin(); un_it != un_mp.end(); un_it++)
        cout << un_it->first << " : " << un_it->second << endl;
    return 0;
}