#include <bits/stdc++.h>

using namespace std;

void input(float &a, float &b, float &c)
{
    cout << "Nhap 3 canh tam giac: ";
    do
    {
        cin >> a >> b >> c;
        if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || b + c <= a || a + c <= b)
            cout << "Thg ngu, nhap lai: ";
    } while (a <= 0 || b <= 0 || c <= 0 || a + b <= c || b + c <= a || a + c <= b);
}

bool kiemTraTamGiacCan(float a, float b, float c)
{
    if (a == b || b == c || a == c)
        return true;
    return false;
}

float bk(float a, float b, float c)
{
    float p = (a + b + c) / 2;
    return sqrt((p - a) * (p - b) * (p - c) / p);
}

float tinhF(float a, float b, float c, float k)
{
    float res = 2022;
    float r = bk(a, b, c);
    for (int i = 1; i <= k; i++)
        res += (1 / pow(r, i));
    return res;
}

int main()
{
    float a, b, c;
    input(a, b, c);
    if (kiemTraTamGiacCan(a, b, c))
        cout << "Dung la tgc";
    else
        cout << "Deo phai thg ngu";
    float r = bk(a, b, c);
    cout << "\nBan kinh = " << r;
    const int M = 2021607908;
    int k = (M % 5) + 5;
    cout << "\nBieu thuc F = " << tinhF(a, b, c, k);
    return 0;
}