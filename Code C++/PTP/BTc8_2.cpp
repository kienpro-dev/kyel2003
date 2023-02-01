//hàm sao chép chuỗi: strcpy, strncpy thuộc thư viện string.h
#include<iostream>
#include<string.h>

using namespace std;

#define MAX 255

int main()
{
    char str1[MAX], str2[MAX];
    cout << "Nhap chuoi 1:";
    gets(str1);
    strcpy(str2, str1);//copy toàn bộ kí tự chuỗi 1 cho chuỗi 2
                        // Lưu ý không sử dụng str2=str1;
    cout << "Chuoi 1:"<<str1<<endl;
    cout << "Chuoi 2:"<<str2<<endl;
    char str3[MAX];
    cout << "Nhap so ki tu muon sao chep:";
    int n;
    cin >> n;
    strncpy(str3, str1, n);//copy n kí tự của chuỗi 2 cho chuỗi 3
                            // nếu số lượng kí tự <n thì chuỗi 3 sẽ thêm khoảng trắng
                            // nếu copy theo kiểu bắc cầu thì sẽ in ra lỗi
    cout << "Chuoi 3:"<<str3;
    return 0;
}