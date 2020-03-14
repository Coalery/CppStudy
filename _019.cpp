#include <iostream>

using namespace std;

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

int main(int argc, char* argv[]) {
    Point p1 = Point(3, 5);
    Point p2 = Point(1, 2);
    Point p3 = p1 - p2;
    p3.printInfo();
}