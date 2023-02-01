// tính tích phân hàm bất kỳ
#include <iostream>
#include <math.h>

using namespace std;

double bieuThuc(double x);
double tichPhan(double a, double b);

int main()
{
    double a, b;
    cout << "Nhap can duoi: ";
    cin >> b;
    cout << "Nhap can tren: ";
    cin >> a;
    double kq = tichPhan(a, b);
    cout << "Ket qua la: " << kq;
    return 0;
}

double bieuThuc(double x)
{
    // trong daáu tích phân là x^2*sĩnx
    // nếu muốn đổi biểu thức khác thì nhập ơ duoi
    return pow(x, 2) * sin(x);
}
double tichPhan(double a, double b)
{
    double h, j;
    h = (b - a) / 1000; // chia ra 1000 khoảng để tính (định nghĩa tp), càng cao thì càng chính xác nhưng máy tính càng lâu
    j = (bieuThuc(a) + bieuThuc(b)) / 2;
    for (int i = 1; i < 1000; i++)
    {
        j += bieuThuc(a + i * h);
    }
    double kq = h * j;
    return kq;
}