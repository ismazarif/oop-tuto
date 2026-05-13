#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    double x;
    double y;

public:

    Point(double xValue, double yValue) {
        x = xValue;
        y = yValue;
    }

    double getX() {
        return x;
    }

    double getY() {
        return y;
    }
};

class Line {
private:
    Point point1;
    Point point2;

public:

    Line(Point p1, Point p2) : point1(p1), point2(p2) {
    }

    double length() {
        double xDiff = point2.getX() - point1.getX();
        double yDiff = point2.getY() - point1.getY();

        return sqrt((xDiff * xDiff) + (yDiff * yDiff));
    }
};

int main()
{
    Point p1(0, 0);
    Point p2(3, 4);

    Line line1(p1, p2);

    cout << "Length of line: " << line1.length() << endl;

    return 0;
}