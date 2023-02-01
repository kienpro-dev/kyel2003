// cấu trúc với điểm trong tọa độ x,y
// nhập 2 điểm roiif tính khoảng cách
// nhập n điểm, xuất điểm đó và tính độ dai từ điẻm dầu đến điểm cuối
#include <iostream>
#include <math.h>

using namespace std;

struct diem
{
    double x;
    double y;
};

double KhoangCach(diem a, diem b);
void NhapMangDiem(diem arr[], int n);
void XuatMangDiem(diem arr[], int n);
double DodaiMangDiem(diem arr[], int n);

int main()
{
    diem a, b;
    cout << "Nhap toa do diem A(x,y): ";
    cin >> a.x >> a.y;
    cout << "Nhap toa do diem B(x,y): ";
    cin >> b.x >> b.y;
    double kq = KhoangCach(a, b);
    cout << "Khoang cach 2 diem A(" << a.x << "," << a.y << ") va B(" << b.x << "," << b.y << "): " << kq << endl;

    cout << "Nhap so diem: ";
    int n;
    cin >> n;
    diem arrDiem[n];
    NhapMangDiem(arrDiem, n);
    XuatMangDiem(arrDiem, n);

    cout << "Do dai cac diem tren: " << DodaiMangDiem(arrDiem, n);
    return 0;
}

double KhoangCach(diem a, diem b)
{
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

void NhapMangDiem(diem arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap toa do diem thu " << i + 1 << ": ";
        cin >> arr[i].x >> arr[i].y;
    }
}

void XuatMangDiem(diem arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Diem " << i + 1 << " (" << arr[i].x << "," << arr[i].y << ")" << endl;
    }
}

double DodaiMangDiem(diem arr[], int n)
{
    double kq = 0;
    for (int i = 0; i < n - 1; i++)
    {
        double kc = KhoangCach(arr[i], arr[i + 1]);
        kq += kc;
    }
    return kq;
}