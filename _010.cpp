#include <iostream>
#include <string>

using namespace std;

int main() {
    string name, address;

    cout << "Name : ";
    getline(cin, name);
    cout << "Address : ";
    getline(cin, address);

    cout << name << " / " << name.length() << " / " << name[0] << endl;
    cout << address << " / " << address.length() << " / " << address[0] << endl;

    string str = "C++ Programming";
    cout << str.find("Pro") << endl;
    cout << str.find("r") << endl;

    if(str.find("Pro", 5) != string::npos)
        cout << "문자열을 찾았습니다.";
    else
        cout << "문자열을 찾지 못했습니다.";
    return 0;
}