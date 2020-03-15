#include <iostream>

using namespace std;

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

int main(int argc, char* argv[]) {
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
void Dog::cry() { cout << "¸Û!" << endl; }
void Cat::cry() { cout << "³É!" << endl; }