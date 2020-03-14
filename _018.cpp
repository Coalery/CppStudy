#include <iostream>

using namespace std;

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

int main(int argc, char* argv[]) {
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