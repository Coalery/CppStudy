#include <iostream>
#include <fstream>
#include <iterator>
#include <string>
#include <algorithm>
#include <iomanip>
#include <memory>

#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <list>
#include <map>
#include <forward_list>
#include <unordered_map>

#include "_016.h"

using namespace std;
using namespace kim;

#pragma region 001
int _001() {
    cout << "Hello World!" << endl;
    return 0;
}
#pragma endregion
#pragma region 002
int _002() {
    int a;

    cout << "Input: ";
    cin >> a;

    cout << a * a << endl;

    return 0;
}
#pragma endregion
#pragma region 003
int _003() {
    int a = 0, b = 1;
    cout << a << ", " << b << endl;
    return 0;
}
#pragma endregion
#pragma region 004
int _004() {
    int a = 10;

    cout << dec;
    cout << "10진수 : " << a << endl;

    cout << oct;
    cout << "8진수 : " << a << endl;

    cout << hex;
    cout << "16진수 : " << a << endl;

    auto b = 0b010111;
    cout << b << endl;

    const int c = 30;
    cout << c << endl;

    return 0;
}
#pragma endregion
#pragma region 005
int _005() {
    int a = -1;
    int b = -1;

    cin >> a;
    cin >> b;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;

    int num1 = 2;
    int num2 = 5;
    int num3 = num1 + num2;
    int num4 = 6;
    num4 += 7;

    cout << num3 << ", " << num4 << endl;

    num3++;
    num4--;

    cout << num3 << ", " << num4 << endl;

    cout << (num1 != num2) << endl;
    cout << (num1 > num2) << endl;

    return 0;
}
#pragma endregion
#pragma region 006
int _006() {
    int input;
    cin >> input;

    if (input > 5)
        cout << "입력값이 5 보다 큽니다." << endl;
    else if (input == 5)
        cout << "입력값이 5 입니다." << endl;
    else
        cout << "입력값이 5 보다 작습니다." << endl;

    switch (input) {
    case 1:
        cout << "입력값은 1 입니다." << endl;
        break;
    case 2:
        cout << "입력값은 2 입니다." << endl;
        break;
    case 3:
        cout << "입력값은 3 입니다." << endl;
        break;
    case 4:
        cout << "입력값은 4 입니다." << endl;
        break;
    default:
        cout << "범위를 벗어났습니다." << endl;
        break;
    }
    return 0;
}
#pragma endregion
#pragma region 007
int _007() {
    int i, num;
    cin >> num;

    cout << "while" << endl;
    while (i < num) {
        cout << i + 1 << endl;
        i++;
    }
    cout << i << endl;

    cout << "do-while" << endl;
    do {
        cout << i + 1 << endl;
        i++;
    } while (false);
    cout << i << endl;

    cout << "for" << endl;
    for (i = 0; i < num; i++)
        cout << i << endl;
    cout << i << endl;

    cout << "Range-based for loop" << endl;
    int arr[5] = { 1, 3, 5, 7, 9 };
    for (int element : arr)
        cout << element << endl;

    cout << "continue" << endl;
    for (i = 0; i <= 100; i++) {
        if (i % 2 == 0) continue;
        cout << i << endl;
    }

    cout << "break" << endl;
    int from = 1, to = 10, sum = 0;
    while (true) {
        sum += from;
        if (from == to) break;
        from++;
    }
    cout << sum << endl;

    return 0;
}
#pragma endregion
#pragma region 008
int _008() {
    int sum = 0;
    int arr[3] = { 11, 51, 17 };
    for (int i = 0; i < 3; i++)
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

    for (int i = 0; i < arr_row_len; i++) {
        for (int j = 0; j < arr_col_len; j++) {
            cout << setw(4) << arr2[i][j];
        }
        cout << endl;
    }

    return 0;
}
#pragma endregion
#pragma region 009
int _009() {
    int* ptr = new int;
    *ptr = 50;

    cout << "Value : " << *ptr << endl;
    cout << "Address : " << ptr << endl;

    delete ptr;
    return 0;
}
#pragma endregion
#pragma region 010
int _010() {
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

    if (str.find("Pro", 5) != string::npos)
        cout << "臾몄���댁�� 李얠���듬����.";
    else
        cout << "臾몄���댁�� 李얠� 紐삵���듬����.";
    return 0;
}
#pragma endregion
#pragma region 011
struct Book {
    string title;
    string author;
    int price;
};

union UnionTest {
    short a;
    int b;
    long c;
};

enum EnumTest {
    A = 10,
    B = 20,
    C = 30
};

int _011() {
    Book book1 = { "C++ Study", "Coalery", 10000 };
    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.price << endl;

    UnionTest unionTest;
    unionTest.a = 10;

    cout << unionTest.a << endl;
    cout << unionTest.b << endl;
    cout << unionTest.c << endl;

    EnumTest enumTest;
    enumTest = EnumTest::A;
    cout << enumTest << endl;
    return 0;
}
#pragma endregion
#pragma region 012
int SmallNum(int, int);

int _012() {
    cout << SmallNum(5, 3) << endl;
    cout << SmallNum(10, 17) << endl;
    return 0;
}

int SmallNum(int num1, int num2) {
    if (num1 > num2) return num1;
    return num2;
}
#pragma endregion
#pragma region 013
typedef double (*CalcType)(double, double);

double add(double, double);
double subtract(double, double);
double multiply(double, double);
double divide(double, double);

double calculate(double, double, CalcType);

int _013() {
    CalcType calc = nullptr;

    char oper;
    int a, b;

    cout << "계산할 숫자를 알려주세요! : ";
    cin >> a >> b;
    cout << "원하는 연산자를 알려주세요! : ";
    cin >> oper;

    switch (oper) {
    case '+':
        calc = add;
        break;
    case '-':
        calc = subtract;
        break;
    case '*':
        calc = multiply;
        break;
    case '/':
        calc = divide;
        break;
    }
    if (calc != nullptr)
        cout << "연산의 결과! : " << calculate(a, b, calc) << endl;
    else
        cout << "연산자가 존재하지 않아요!" << endl;
}

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) {
    if (b == 0) return 0.0;
    return a / b;
}

double calculate(double a, double b, CalcType type) { return type(a, b); }
#pragma endregion
#pragma region 014
struct Book {
    string title;
    string author;
    int price;
};

void Swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void Swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void printBook(const Book book) {
    cout << "Title : " << book.title << endl;
    cout << "Author : " << book.author << endl;
    cout << "Price : " << book.price << endl;
}

int _014() {
    int a = 2, b = 4;
    cout << "a : " << a << ", b : " << b << endl;
    Swap(&a, &b);
    cout << "a : " << a << ", b : " << b << endl;
    Swap(a, b);
    cout << "a : " << a << ", b : " << b << endl;

    Book book = { "C++", "Coalery", 10000 };
    printBook(book);
    return 0;
}
#pragma endregion
#pragma region 015
int hi(int a, int b, char c = 'a', int d = 7) {
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;
    cout << "d : " << d << endl;
}

int _015() {
    hi(1, 2);
    hi(1, 2, 'b');
    hi(1, 2, 'd', 3);
    return 0;
}
#pragma endregion
#pragma region 016
void kim::Hello() {}

int _016() {
    kim::Hello();
    kim::Display();
    cout << kim::count << endl;
    return 0;
}
#pragma endregion
#pragma region 017
class Cat17 {
private:
    string name;
    int age;

public:
    string getName() { return name; }
    int getAge() { return age; }

    void setName(string name) { this->name = name; }
    void setAge(int age) { this->age = age; }

    void printInfo() { cout << "Cat{\"name\":\"" << this->name << "\",\"age\":\"" << this->age << "\"}" << endl; }

    Cat17& youngerCat(Cat17& comp_cat) {
        if (this->age > comp_cat.age) return comp_cat;
        else return *this;
    }
};

int _017() {
    Cat17 cat1;
    cat1.setName("cat1");
    cat1.setAge(5);
    cat1.printInfo();

    Cat17 cat2;
    cat2.setName("cat2");
    cat2.setAge(7);
    cat2.printInfo();

    cat1.youngerCat(cat2).printInfo();

    return 0;
}
#pragma endregion
#pragma region 018
class Point {
private:
    int x;
    int y;
public:
    // Point() {
    //     this->x = 10;
    //     this->y = 20;
    // }
    Point(int x = 10, int y = 20) {
        this->x = x;
        this->y = y;
    }
    void printInfo() { cout << "Point{\"x\":\"" << x << "\",\"y\":\"" << y << "\"}" << endl; }
    ~Point() { cout << "Destructor Called." << endl; }
};

int _018() {
    Point p = Point();
    p.printInfo();

    Point p2 = Point(2, 3);
    p2.printInfo();

    Point p3 = Point(p2);
    p2.printInfo();

    Point* p4 = new Point(1, 3);
    p4->printInfo();
    delete p4;

    return 0;
}
#pragma endregion
#pragma region 019
class Point {
private:
    int x;
    int y;
public:
    Point(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }
    void printInfo() { cout << "Point{\"x\":\"" << x << "\",\"y\":\"" << y << "\"}" << endl; }

    Point operator-(const Point& point1) {
        return Point(this->x - point1.x, this->y - point1.y);
    }
};

int _019() {
    Point p1 = Point(3, 5);
    Point p2 = Point(1, 2);
    Point p3 = p1 - p2;
    p3.printInfo();
}
#pragma endregion
#pragma region 020
class Point {
private:
    int x;
    int y;
public:
    Point(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }
    void printInfo() { cout << "Point{\"x\":\"" << x << "\",\"y\":\"" << y << "\"}" << endl; }
    Point operator-(const Point& point) const;
    Point operator*(double mul) const;
    friend Point operator*(double mul, const Point& origin);
};

Point Point::operator*(double mul) const { return Point(this->x * mul, this->y * mul); }
Point operator*(double mul, const Point& origin) { return Point(origin.x * mul, origin.y * mul); }

int _020() {
    Point p = Point(3, 3);

    Point p2 = p * 3;
    p2.printInfo();

    Point p3 = 4 * p;
    p3.printInfo();
    return 0;
}
#pragma endregion
#pragma region 021
class Person21 {
protected:
    string name;
    int age;
public:
    Person21(const string& name, int age);
    virtual void printInfo();
};

class Student : public Person21 {
private:
    int sid;
public:
    Student(const string& name, int age, int sid);
    virtual void printInfo();
};

int _021() {
    Person21* ptr_person;

    Person21 person("p1", 21);
    Student student("s1", 18, 12);

    ptr_person = &person;
    ptr_person->printInfo();
    ptr_person = &student;
    ptr_person->printInfo();
    return 0;
}

Person21::Person21(const string& name, int age) {
    this->name = name;
    this->age = age;
}
void Person21::printInfo() { cout << "name : " << name << ", age : " << age << endl; }

Student::Student(const string& name, int age, int sid) : Person21(name, age) { this->sid = sid; }
void Student::printInfo() { cout << "name : " << name << ", age : " << age << ", sid : " << sid << endl; }
#pragma endregion
#pragma region 022
class Animal {
private:
    string name;
    int age;
public:
    Animal(const string& name, int age);
    void printInfo();
    virtual void cry() = 0;
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    Dog(const string& name, int age) : Animal(name, age) {}
    virtual void cry();
};

class Cat : public Animal {
public:
    Cat(const string& name, int age) : Animal(name, age) {}
    virtual void cry();
};

int _022() {
    Dog dog("d1", 5);
    dog.cry();
    dog.printInfo();

    Cat cat("c1", 3);
    cat.cry();
    cat.printInfo();

    return 0;
}

Animal::Animal(const string& name, int age) {
    this->name = name;
    this->age = age;
}
void Animal::printInfo() { cout << "name : " << name << ", age : " << age << endl; }
void Dog::cry() { cout << "멍!" << endl; }
void Cat::cry() { cout << "냥!" << endl; }
#pragma endregion
#pragma region 023
template <typename T> void Swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <> void Swap<double>(double&, double&) {}

int _023() {
    int a = 2, b = 3;
    cout << "a : " << a << ", b : " << b << endl;
    Swap(a, b);
    cout << "a : " << a << ", b : " << b << endl;

    char c = 'c', d = 'd';
    cout << "c : " << c << ", d : " << d << endl;
    Swap(c, d);
    cout << "c : " << c << ", d : " << d << endl;

    string e = "c++", f = "java";
    cout << "e : " << e << ", f : " << f << endl;
    Swap(e, f);
    cout << "e : " << e << ", f : " << f << endl;

    double g = 2.3, h = 4.7;
    cout << "g : " << g << ", h : " << h << endl;
    Swap(g, h);
    cout << "g : " << g << ", h : " << h << endl;
    return 0;
}
#pragma endregion
#pragma region 024
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

int _024() {
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
#pragma endregion
#pragma region 025
class Person {
private:
    string name;
    int age;
public:
    Person(const string& name, int age) : name(name), age(age) {}
    ~Person() { cout << name << " : 소멸자 호출." << endl; }
    void printInfo() const { cout << "name : " << name << ", age : " << age << endl; }

    void setName(const string& name) { this->name = name; }
    void setAge(int age) { this->age = age; }

    string getName() const { return name; }
    int getAge() const { return age; }
};

int _025() {
    auto ptr1 = make_unique<Person>("p1", 23);
    ptr1->printInfo();

    auto ptr2 = make_unique<Person>("p2", 24);
    ptr2->printInfo();

    ptr1.reset();
    ptr2.reset();

    auto ptr3 = make_shared<Person>("p3", 25);
    cout << ptr3.use_count() << endl;
    auto ptr4 = ptr3;
    cout << ptr3.use_count() << endl;
    auto ptr5 = ptr4;
    cout << ptr3.use_count() << endl;

    ptr3->printInfo();
    ptr4->printInfo();
    ptr5->printInfo();

    ptr4->setAge(21);
    ptr5->setName("p21");

    ptr3->printInfo();
    ptr4->printInfo();
    ptr5->printInfo();

    ptr3.reset();
    cout << ptr5.use_count() << endl;
    ptr4.reset();
    cout << ptr5.use_count() << endl;
    ptr5.reset();
    cout << "End!" << endl;
    return 0;
}
#pragma endregion
#pragma region 026
int _026() {
    vector<int> vc = { 1, 2, 3, 4, 5 };

    copy(vc.begin(), vc.end(), ostream_iterator<int>(cout));
    cout << endl;
    copy(vc.begin(), vc.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    copy(vc.rbegin(), vc.rend(), ostream_iterator<int>(cout, " "));
    cout << endl;

    vector<int>::iterator vIterator;
    for (vIterator = vc.begin(); vIterator != vc.end(); vIterator++)
        cout << *vIterator << endl;

    return 0;
}
#pragma endregion
#pragma region 027
int _027() {
    vector<int> ve = { 1, 5, 2, 3, 4, 2, 4, 3 };
    ve.push_back(7);
    copy(ve.begin(), ve.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    deque<int> de = { 1, 5, 2, 3, 4, 2, 4, 3 };
    de.push_back(4);
    de.push_front(7);
    cout << de.front() << endl;
    de.pop_front();
    copy(de.begin(), de.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    list<int> li = { 1, 5, 2, 3, 4, 2, 4, 3 };
    li.push_back(4);
    li.push_front(7);
    li.sort();
    li.unique();
    copy(li.begin(), li.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    forward_list<int> fl = { 1, 5, 2, 3, 4, 2, 4, 3 };
    fl.push_front(5);
    cout << fl.front() << endl;
    copy(fl.begin(), fl.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
#pragma endregion
#pragma region 028
int _028() {
    int arr[5] = { 10, 20, 30, 40, 50 };
    set<int> st(arr, arr + 3);
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
    for (it = mp.begin(); it != mp.end(); it++)
        cout << it->first << " : " << it->second << endl;

    unordered_map<string, int> un_mp;
    un_mp.insert(pair<string, int>("국어", 80));
    un_mp["수학"] = 100;

    unordered_map<string, int>::iterator un_it;
    for (un_it = un_mp.begin(); un_it != un_mp.end(); un_it++)
        cout << un_it->first << " : " << un_it->second << endl;
    return 0;
}
#pragma endregion
#pragma region 029
int _029() {
    // Stack
    int decimal = 123;
    stack<int> st;

    do {
        st.push(decimal % 2);
        decimal /= 2;
    } while (decimal);

    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
    cout << endl;

    // Queue
    int n = 20;
    queue<int> que;
    que.push(0);
    que.push(1);

    for (int i = 2; i < n; i++) {
        int temp = que.front();
        cout << temp << " ";
        que.pop();
        que.push(temp + que.front());
    }
    cout << endl;

    // Piriority Queue
    priority_queue<int> pq;
    pq.push(10);
    pq.push(23);
    pq.push(20);
    pq.push(14);

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
    return 0;
}
#pragma endregion
#pragma region 030
int _030() {
    vector<int> vc = { 20, 40, 10, 30 };

    sort(vc.begin(), vc.end(), greater<int>());
    copy(vc.begin(), vc.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    sort(vc.begin(), vc.end(), less<int>());
    copy(vc.begin(), vc.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    return 0;
}
#pragma endregion
#pragma region 031
vector<string> split(string& str, char divider) {
    vector<string> result;
    size_t findResult;
    while ((findResult = str.find(divider)) != string::npos) {
        result.push_back(str.substr(0, findResult));
        str = str.substr(findResult + 1);
    }
    result.push_back(str);
    return result;
}

int _031() {
    ifstream ifs("_031.txt");
    string str;

    if (!ifs.is_open()) {
        cout << "파일을 열 수 없습니다." << endl;
        exit(1);
    }

    getline(ifs, str);
    vector<string> spl = split(str, ';');
    cout << "name : " << spl[0] << ", score : " << spl[1] << endl;
    return 0;
}
#pragma endregion
#pragma region 032
int increase(int n) {
    if (n < 0) throw n;
    else if (n == 0) throw "0은 입력할 수 없습니다.";
    return n + 1;
}

int _032() {
    int num;

    cout << "양의 정수 하나를 입력해주세요: ";
    while (cin >> num) {
        try {
            cout << increase(num) << endl;
        }
        catch (int input) {
            cout << input << "은 양의 정수가 아닙니다." << endl;
            cout << "양의 정수를 다시 입력해주세요.";
            continue;
        }
        catch (const char* st) {
            cout << st << endl;
            cout << "양의 정수를 다시 입력해주세요.";
            continue;
        }
        break;
    }
    return 0;
}
#pragma endregion

int main() {
    //_001();
    //_002();
    //_003();
    //_004();
    //_005();
    //_006();
    //_007();
    //_008();
    //_009();
    //_010();
    //_011();
    //_012();
    //_013();
    //_014();
    //_015();
    //_016();
    //_017();
    //_018();
    //_019();
    //_020();
    //_021();
    //_022();
    //_023();
    //_024();
    //_025();
    //_026();
    //_027();
    //_028();
    //_029();
    //_030();
    //_031();
    _032();

    return 0;
}