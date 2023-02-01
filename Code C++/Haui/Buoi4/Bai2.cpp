#include <iostream>

using namespace std;

void input(float &x, float &esp)
{
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap esp: ";
    do
    {
        cin >> esp;
        if (esp > 0.001)
            cout << "Yeu cau nhap esp <= 0.001: ";
    } while (esp > 0.001);
}

float Factorial(int k)
{
    if (k == 0 || k == 1)
        return 1;
    return k * Factorial(k - 1);
}

float Power(float x, int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    return x * Power(x, n - 1);
}

float PowerE(float x, float esp)
{
    float result = 0;
    int i = 0;
    while (Power(x, i) / Factorial(i) >= esp)
    {
        result += Power(x, i) / Factorial(i);
        i++;
    }
    return result;
}

int main()
{
    float x, esp;
    char c;
    while (true)
    {
        input(x, esp);
        cout << "e^" << x << " = " << PowerE(x, esp) << endl;
        cout << "Ban muon tiep tuc khong ? (c,k): ";
        cin >> c;
        if (c == 'k')
            break;
        else if (c != 'c')
            cout << "Cu phap khong hop le!";
        break;
    }
    return 0;
}