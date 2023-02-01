#include <iostream>
#include <math.h>
using namespace std;

class Geometry
{
public:
    virtual double perimeter() = 0;
    virtual double area() = 0;
    virtual void display()
    {
        cout << "Perimeter: " << perimeter() << endl;
        cout << "Area: " << area() << endl;
    }
};

class Circle : public Geometry
{
private:
    int r;

public:
    Circle()
    {
    }
    Circle(int r) : r(r)
    {
    }
    double perimeter()
    {
        return 4 * 3.14 * r;
    }
    double area()
    {
        return 3 * 14 * r * r;
    }
};

class Traiangle : public Geometry
{
private:
    int a;
    int b;
    int c;

public:
    Traiangle()
    {
    }
    Traiangle(int a, int b, int c) : a(a), b(b), c(c)
    {
    }
    double perimeter()
    {
        return a + b + c;
    }
    double area()
    {
        double p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
};

class Rectangle : public Geometry
{
private:
    int h;
    int w;

public:
    Rectangle()
    {
    }
    Rectangle(int h, int w) : h(h), w(w)
    {
    }
    double perimeter()
    {
        return h + h + w + w;
    }
    double area()
    {
        return h * w;
    }
};

int main()
{
    Geometry **g = new Geometry *[3]; //Geometry *g[3];
    g[0] = new Rectangle(3, 4);
    g[1] = new Circle(5.6);
    g[2] = new Traiangle(5, 6, 7);
    for (int i = 0; i < 3; i++)
        g[i]->display();
    delete g;
    return 0;
}