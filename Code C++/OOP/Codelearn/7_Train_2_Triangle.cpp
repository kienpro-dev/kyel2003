#include "7_Train_1_Point.cpp"
#include <math.h>

class Triangle
{
private:
    Point vertice1;
    Point vertice2;
    Point vertice3;

public:
    Triangle(Point vertice1, Point vertice2, Point vertice3)
    {
        this->vertice1 = vertice1;
        this->vertice2 = vertice2;
        this->vertice3 = vertice3;
    }
    Triangle(int x1, int y1, int x2, int y2, int x3, int y3)
    {
        vertice1 = Point(x1, y1);
        vertice2 = Point(x2, y2);
        vertice3 = Point(x3, y3);
    }
    double getLength(Point x, Point y)
    {
        return sqrt((x.getX() - y.getX()) * (x.getX() - y.getX()) * 1.0 + (x.getY() - y.getY()) * (x.getY() - y.getY()) * 1.0);
    }
    double getPerimeter()
    {
        return getLength(vertice1, vertice2) + getLength(vertice1, vertice3) + getLength(vertice3, vertice2);
    }
};