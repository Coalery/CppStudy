#include <iostream>
#include <memory>

using namespace std;

class Person {
    private:
        string name;
        int age;
    public:
        Person(const string& name, int age) : name(name), age(age) {}
        ~Person() { cout << name <<  " : ¼Ò¸êÀÚ È£Ãâ." << endl; }
        void printInfo() const { cout << "name : " << name << ", age : " << age << endl; }

        void setName(const string& name) { this->name = name; }
        void setAge(int age) { this->age = age; }

        string getName() const { return name; }
        int getAge() const { return age; }
};

int main(int argc, char* argv[]) {
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