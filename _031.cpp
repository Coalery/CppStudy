#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

vector<string> split(string& str, char divider) {
    vector<string> result;
    size_t findResult;
    while((findResult = str.find(divider)) != string::npos) {
        result.push_back(str.substr(0, findResult));
        str = str.substr(findResult + 1);
    }
    result.push_back(str);
    return result;
}

int main(int argc, char* argv[]) {
    ifstream ifs("_031.txt");
    string str;
    
    if(!ifs.is_open()) {
        cout << "파일을 열 수 없습니다." << endl;
        exit(1);
    }

    getline(ifs, str);
    vector<string> spl = split(str, ';');
    cout << "name : " << spl[0] << ", score : " << spl[1] << endl;
    return 0;
}