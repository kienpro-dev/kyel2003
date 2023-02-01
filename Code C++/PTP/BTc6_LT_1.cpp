//ptb2 dung ham
#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

void PTb2(int a, int b, int c);

void PTb2(int a, int b, int c)
{
    if(a==0)
    {
        if(b==0 && c==0)
        {
            cout << "PT vo so nghiem";
        }
        else if(b==0 && c!=0)
        {
            cout << "PT vo mghiem";
        }
        else
        {
            double x=-c*1.0/b;
            cout << "PT co 1 nghiem x = "<<setprecision(4)<<x;
        }
    }
    else 
    {
        double delta=pow(b,2)-4*a*c;
        if (delta<0)
        {
            cout << "PT vo nghiem";
        }
        else if(delta==0)
        {
            cout << "PT co 1 nghiem kep: x = "<<setprecision(4)<<-b*1.0/(2*a);
        }   
        else
        {
            double x1=(-b+sqrt(delta))/(2*a);
            double x2=(-b-sqrt(delta))/(2*a);
            cout << "PT co 2 nghiem phan biet:"<<endl;
            cout <<"x1 = "<<setprecision(4)<<x1<<"\t"<<"x2 = "<<setprecision(4)<<x2;
        }
    }
}

int main()
{
    cout << "Tinh 2x^2+5x-6";
    PTb2(2,5,-6);
    cout << "\nTinh x^2+x-4";
    PTb2(1,1,-4);
    cout << "\nTinh -3x^2+6x+8";
    PTb2(-3,6,8);
    return 0;
}