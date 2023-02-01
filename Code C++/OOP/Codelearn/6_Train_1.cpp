#include <iostream>
#include "6_Train_1_shape.cpp"
#include "6_Train_1_rectangle.cpp"
#include "6_Train_1_circle.cpp"

using namespace std;

int main()
{
    Shape **shapes = new Shape *[3];
    shapes[0] = new Rectangle(4, 5);
    shapes[1] = new Rectangle(2.3, 4.1);
    shapes[2] = new Circle(2.5);
    for (int i = 0; i < 3; i++)
    {
        cout << "Area of shape[" << i << "] = " << shapes[i]->getArea() << endl;
        cout << "Perimeter of shape[" << i << "] = " << shapes[i]->getPerimeter() << endl;
    }
    return 0;
}