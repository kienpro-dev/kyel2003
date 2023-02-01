#include <iostream>

using namespace std;

void input(int &x, int &y)
{
    cout << "Nhap so dien dau thang va cuoi thang: ";
    do
    {
        cin >> x >> y;
        if (x < 0 || x > y)
            cout << "Nhap sai, yeu cau nhap lai: ";
    } while (x < 0 || x > y);
}

int electricityBill(int z)
{
    int result = 0;
    if (z <= 100)
        result = z * 1000;
    else if (z <= 200)
        result = 100 * 1000 + (z - 100) * 1700;
    else
        result = 100 * 1000 + 100 * 1700 + (z - 200) * 3500;
    return result;
}

int main()
{
    int beginOfMonth, endOfMonth, electricNum;
    input(beginOfMonth, endOfMonth);
    electricNum = endOfMonth - beginOfMonth;
    cout << "So dien tieu thu (kwh): " << electricNum << endl;
    cout << "So tien phai tra (vnd): " << electricityBill(electricNum);
    return 0;
}