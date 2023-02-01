// hàm so sánh chuỗi strcmp, strncmp
//  kết quả so sánh 2 chuỗi sẽ trả về 1 số int
//  kq=0 ==> 2 chuôi bằng nhau
//  kq>0 ==> chuôi 1 lớn hoưn chuỗi 2
//  kq<0 ==> chuôi 1 nhỏ hoưn chuỗi 2
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char name1[50], name2[50];
    cout << "Nhap ten 1:";
    gets(name1);
    cout << "Nhap ten 2:";
    gets(name2);
    int kq = strcmp(name1, name2);
    if (kq == 0)
    {
        cout << "Ten 2 nguoi giong nhau" << endl;
    }
    else if (kq > 0)
    {
        cout << "Ten 1 dai hon ten 2" << endl;
    }
    else
    {
        cout << "Ten 1 ngan hon ten 2" << endl;
    }
    char name3[50], name4[50];
    cout << "Nhap ten 3:";
    gets(name3);
    cout << "Nhap ten 4:";
    gets(name4);
    int kq2 = strncmp(name3, name4, 5);
    if (kq2 == 0)
    {
        cout << "Ten 2 nguoi giong nhau" << endl;
    }
    else if (kq2 > 0)
    {
        cout << "Ten 3 dai hon ten 4" << endl;
    }
    else
    {
        cout << "Ten 3 ngan hon ten 4" << endl;
    }
    return 0;
}