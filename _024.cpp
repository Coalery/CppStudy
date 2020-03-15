#include <iostream>

using namespace std;

template <typename T> class Data {
    private:
        T data;
    public:
        Data(T data);
        T getData();
};

template <> class Data<double> {
    private:
        double data;
    public:
        Data(double data) { this->data = data; }
        double getData() {
            cout << "Double!" << endl;
            return this->data;
        }
};

int main(int argc, char* argv[]) {
    Data<string> strData("Hello World!");
    Data<int> intData(5);
    Data<double> douData(10.0);
    cout << strData.getData() << endl;
    cout << intData.getData() << endl;
    cout << douData.getData() << endl;
    return 0;
}

template <typename T> Data<T>::Data(T data) { this->data = data; }
template <typename T> T Data<T>::getData() { return this->data; }