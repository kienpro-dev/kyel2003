// tim UCLN 2 so nhap vao
#include <iostream>

using namespace std;

int UCLN(int x, int y);

int UCLN(int x, int y)
{
    int UCLN;
    if (x == 0 || y == 0)
    {
        UCLN = x + y; // nếu 1 trong 2 số bằng không thì ucln là số còn lại
    }
    else
    {
        while (x != y)
        {
            if (x > y)
            {
                x -= y;
            }
            else
            {
                y -= x;
            }
            UCLN = x;
        }
        /*vòng lặp sẽ kiểm tra số nào lớn hơn rồi trừ số bé
        liên tục như vậy đến khi x khác y là sai nghĩa là
        x=y, lúc này x hoặc y chính là ucln 2 số x,y ban đầu
        */
    }
    return UCLN;
}

int main()
{
    int uoc;
    int a, b;
    cout << "Nhap a:";
    cin >> a;
    cout << "Nhap b:";
    cin >> b;
    uoc = UCLN(a, b);
    cout << "UCLN cua hai so " << a << " va " << b << " la: " << uoc;
    return 0;
}