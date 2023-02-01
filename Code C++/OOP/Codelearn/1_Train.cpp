#include <iostream>
#include "1_Train_fileClass.cpp"

using namespace std;

int main()
{
    Square s(10);
    cout << "Area: " << s.getArea() << endl;
    cout << "Perimeter: " << s.getPerimeter() << endl;
    return 0;
}