// GiAI PT BAC 2
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Giai PT: ax^2 + bx + c = 0" << endl;
    int a, b, c;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                cout << "PT vo so nghiem";
            }
            else
            {
                cout << "PT vo nghiem";
            }
        }
        else
        {
            cout << "PT co 1 nghiem x = " << setprecision(3) << (double)(-c / b);
        }
    }
    else
    {
        double delta = pow(b, 2) - 4 * a * c;
        if (delta < 0)
        {
            cout << "PT vo nghiem";
        }
        else if (delta == 0)
        {
            cout << "PT co 1 nghiem kep x1 = x2 = " << (double)-b / (2 * a);
        }
        else
        {
            double x1, x2;
            x1 = (double)((-b + sqrt(delta)) / (2 * a));
            x2 = (double)((-b - sqrt(delta)) / (2 * a));
            cout << "PT co 2 nghiem phan biet x1, x2: " << endl
                 << "x1 = " << setprecision(3) << x1 << endl
                 << "x2 = " << setprecision(3) << x2 << endl;
        }
    }
    return 0;
}