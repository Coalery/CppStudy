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
        Point operator-(const Point& point) const;
        Point operator*(double mul) const;
        friend Point operator*(double mul, const Point& origin);
};

Point Point::operator*(double mul) const { return Point(this->x * mul, this->y * mul); }
Point operator*(double mul, const Point& origin) { return Point(origin.x * mul, origin.y * mul); }

int main(int argc, char* argv[]) {
    Point p = Point(3, 3);

    Point p2 = p * 3;
    p2.printInfo();

    Point p3 = 4 * p;
    p3.printInfo();
    return 0;
}