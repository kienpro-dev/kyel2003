#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Nhap he so phuong trinh ax^2 + bx + c = 0: ";
    cin >> a >> b >> c;
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                cout << "PT vo so nghiem";
            else
                cout << "PT vo nghiem";
        }
        else
            cout << "PT co 1 nghiem x = " << (double)(-c / b);
    }
    else
    {
        double delta = pow(b, 2) - 4 * a * c;
        if (delta < 0)
            cout << "PT vo nghiem";
        else if (delta == 0)
            cout << "PT co 1 nghiem kep x1 = x2 = " << (double)-b / (2 * a);
        else
        {
            double x1, x2;
            x1 = (double)((-b + sqrt(delta)) / (2 * a));
            x2 = (double)((-b - sqrt(delta)) / (2 * a));
            cout << "PT co 2 nghiem phan biet x1, x2:\nx1 = " << x1 << "\n"
                 << "x2 = " << x2 << endl;
        }
    }
    return 0;
}