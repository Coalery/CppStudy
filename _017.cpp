#include <iostream>

using namespace std;

class Cat {
    private:
        string name;
        int age;
    
    public:
        string getName() { return name; }
        int getAge() { return age; }

        void setName(string name) { this->name = name; }
        void setAge(int age) { this->age = age; }

        void printInfo() { cout << "Cat{\"name\":\"" << this->name << "\",\"age\":\"" << this->age << "\"}" << endl; }

        Cat& youngerCat(Cat& comp_cat) {
            if(this->age > comp_cat.age) return comp_cat;
            else return *this;
        }
};

int main(int argc, char* argv[]) {
    Cat cat1;
    cat1.setName("cat1");
    cat1.setAge(5);
    cat1.printInfo();

    Cat cat2;
    cat2.setName("cat2");
    cat2.setAge(7);
    cat2.printInfo();

    cat1.youngerCat(cat2).printInfo();

    return 0;
}