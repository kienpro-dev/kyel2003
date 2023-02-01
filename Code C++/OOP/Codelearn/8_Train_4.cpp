#include <iostream>
#include <math.h>

using namespace std;

class Point
{
public:
    int x;
    int y;
    Point()
    {
    }
    Point(int x, int y) : x(x), y(y)
    {
    }
    void setX(int x)
    {
        this->x = x;
    }
    int getX()
    {
        return x;
    }
    void setY(int y)
    {
        this->y = y;
    }
    int getY()
    {
        return y;
    }
    friend Point operator-(Point A, Point B) // nap chong toan tu giup thuc hien phep tinh voi kieu du lieu khac(kieu du lieu tu dinh nghia)
    {
        return Point(A.x - B.x, A.y - B.y);
    }
    double distance(Point b)
    {
        return sqrt((b.x - this->x) * (b.x - this->x) + (b.y - this->y) * (b.y - this->y));
    }
};

class Traiangle : public Point
{
private:
    Point A;
    Point B;
    Point C;

public:
    Traiangle()
    {
    }
    Traiangle(Point A, Point B, Point C) : A(A), B(B), C(C)
    {
    }
    void setA(Point A)
    {
        this->A = A;
    }
    Point getA()
    {
        return A;
    }
    void setB(Point B)
    {
        this->B = B;
    }
    Point getB()
    {
        return B;
    }
    double perimeter()
    {
        return A.distance(B) + B.distance(C) + C.distance(A);
    }
    double area()
    {
        return sqrt((perimeter() / 2) * ((perimeter() / 2) - A.distance(B)) * ((perimeter() / 2) - A.distance(C)) * ((perimeter() / 2) - C.distance(B)));
    }
    Point center()
    {
        return Point((A.getX() + B.getX() + C.getX())*1.0 / 3, (A.getY() + B.getY() + C.getY())*1.0/ 3);
    }
    bool isTraingle()
    {
        return (A.distance(B) + B.distance(C) > C.distance(A) && A.distance(B) < B.distance(C) + C.distance(A) && A.distance(B) + C.distance(A) > B.distance(C));
    }
};

int main()
{
    return 0;
}