#include<iostream>
#include <cmath>

using namespace std;

class Point
{
public:
    Point();
    Point(double X1, double Y1);
    ~Point();
    void setPoint();
    void showPoint();
private:
    double x1{}, y1{};
};

Point::Point(double X1, double Y1)
{
    x1 = X1;
    y1 = Y1;
}

Point::~Point()
= default;

void Point::setPoint()
{
    cout << "Input x1 and y1"<< endl;
    cin >> x1 >> y1;
}

void Point::showPoint()
{
    cout << "The Point is :(" << x1 << "," << y1 << ")" << endl;
}

Point::Point() {

}


class Triangle : public Point
{
public:
    Triangle(double X1, double Y1, double X2, double Y2, double X3, double Y3);
    ~Triangle();
    Triangle(const Triangle& t);
    friend Triangle operator==(const Triangle& t1, const Triangle& t2);
    friend  ostream& operator << (ostream& out, const Triangle& t1);
    double findPerimeter();

private:
    double perimeter = 0.0;
    double x1, y1, x2, y2, x3, y3;
};


Triangle::Triangle(double X1, double Y1, double X2, double Y2, double X3, double Y3)
{
    x1 = X1; y1 = Y1;
    x2 = X2; y2 = Y2;
    x3 = X3; y3 = Y3;
}

Triangle::~Triangle()
= default;

Triangle::Triangle(const Triangle& t)
 : Point(t) {
    x1 = t.x1; y1 = t.y1;
    x2 = t.x2; y2 = t.y2;
    x3 = t.x3; y3 = t.y3;

}

double Triangle::findPerimeter()
{
    perimeter = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) + sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3)) + sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    return perimeter;
}

Triangle operator==(const Triangle& t1, const Triangle& t2)
{
    return Triangle(0,0,0,0,0,0);
}

ostream &operator<<(ostream &out, const Triangle &t1) {

}
