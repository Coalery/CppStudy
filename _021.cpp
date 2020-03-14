#include <iostream>

using namespace std;

class Person {
    protected:
        string name;
        int age;
    public:
        Person(const string& name, int age);
        virtual void printInfo();
};

class Student : public Person {
    private:
        int sid;
    public:
        Student(const string& name, int age, int sid);
        virtual void printInfo();
};

int main(int argc, char* argv[]) {
    Person* ptr_person;

    Person person("p1", 21);
    Student student("s1", 18, 12);

    ptr_person = &person;
    ptr_person->printInfo();
    ptr_person = &student;
    ptr_person->printInfo();
    return 0;
}

Person::Person(const string& name, int age) {
    this->name = name;
    this->age = age;
}
void Person::printInfo() { cout << "name : " << name << ", age : " << age << endl; }

Student::Student(const string& name, int age, int sid) : Person(name, age) { this->sid = sid; }
void Student::printInfo() { cout << "name : " << name << ", age : " << age << ", sid : " << sid << endl; }