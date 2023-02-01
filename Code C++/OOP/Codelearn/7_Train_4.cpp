#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    Point()
    {
    }
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void setX(int x)
    {
        this->x = x;
    }
    void setY(int y)
    {
        this->y = y;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};

class PolyLine
{
private:
    vector<Point> points;

public:
    PolyLine()
    {
    }
    PolyLine(vector<Point> points)
    {
        this->points = points;
    }
    void appendPoint(Point points)
    {
        this->points.push_back(points);
    }
    void appendPoint(int x, int y)
    {
        this->points.push_back(Point(x, y));
    }
    double getLength(Point a, Point b)
    {
        return sqrt((a.getX() - b.getX()) * (a.getX() - b.getX()) + (a.getY() - b.getY()) * (a.getY() - b.getY()));
    }
    double getLength()
    {
        double length = 0;
        for (int i = 0; i < this->points.size() - 1; i++)
            length += getLength(this->points[i], this->points[i + 1]);
        return length;
    }
};