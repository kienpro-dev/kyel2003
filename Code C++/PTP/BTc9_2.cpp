// Viết chương trình khai báo kiểu dữ liệu SinhVien có 1 vài thuộc tính cơ bản
// Sau đó bạn hãy nhập từ bàn phím mảng n phần tử các SinhVien
//  hiển thị ra màn hình thông tin của sinh viên có điểm cao nhất
#include <iostream>
#include <string.h>

using namespace std;

struct Students
{
    char name[50];
    char clas[50];
    double score;
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Class: " << clas << endl;
        cout << "Score: " << score;
    }
};

int main()
{
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    Students sinhVien[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap ten: ";
        cin >> sinhVien[i].name;
        cout << "Nhap lop: ";
        cin >> sinhVien[i].clas;
        cout << "Nhap diem: ";
        cin >> sinhVien[i].score;
    }
    Students lowest = sinhVien[0];
    for (int i = 1; i < n; i++)
    {
        if (sinhVien[i].score < sinhVien[0].score)
        {
            lowest = sinhVien[i];
        }
    }
    cout << "Sinh vien diem thap nhat" << endl;
    lowest.display(); // có thể truy xuất đến hàm được đặt trong struct
    return 0;
}