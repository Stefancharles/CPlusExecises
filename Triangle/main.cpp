#include<iostream>
#include <cmath>

using namespace std;

class Point
{
public:
    Point();
    Point(double X1, double Y1);
    ~Point();
    Point setPoint();
    void showPoint();
    double getX() const;
    double getY() const;
private:
    double x, y;
};

Point::Point(double X1, double Y1)
{
    x = X1;
    y = Y1;
}

Point::~Point()
= default;

Point Point::setPoint()
{
    cout << "Input x and y"<< endl;
    cin >> x >> y;
    return *this;
}

void Point::showPoint()
{
    cout << "The Point is :(" << x << "," << y << ")" << endl;
}

Point::Point() {

}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}


class Triangle
{
public:
    Triangle();
    ~Triangle();
    friend int operator==(const Triangle& t1, const Triangle& t2);
    friend  ostream& operator << (ostream& out, const Triangle& t1);
    double findPerimeter();

private:
    Point a,b,c;
    double perimeter = 0.0;

};

Triangle::Triangle(){
    a = a.setPoint();
    b = b.setPoint();
    c = c.setPoint();
}

Triangle::~Triangle()
= default;


double Triangle::findPerimeter()
{
    perimeter = 0.0;//意思一下
    cout << "Perimeter is:" << perimeter << endl;
    return perimeter;
}

int operator==(const Triangle& t1, const Triangle& t2)
{
    if((t1.a.getX()==t2.a.getX())&&(t1.a.getY()==t2.a.getY()))//意思一下
        return 1;
    else
        return 0;

}

ostream &operator<<(ostream &out, const Triangle &t1)//意思一下
{
    cout << "The Point is :(" << t1.a.getX() << "," << t1.a.getY() << ")" << endl;
    cout << "The Point is :(" << t1.a.getX() << "," << t1.a.getY() << ")" << endl;
    cout << "The Point is :(" << t1.a.getX() << "," << t1.a.getY() << ")" << endl;
}

int main()
{
    Triangle a = Triangle();
    Triangle b = Triangle();
    a.findPerimeter();
    b.findPerimeter();
    if(a==b)
        cout << "Match!" << endl;
    else
        cout << "No Match!" << endl;

    cout << a << endl;

}
