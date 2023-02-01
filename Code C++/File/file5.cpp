// Hàm dịch chuyển con trỏ chỉ vị trong file
// seekg(x,y):
// x: số byte cần dịch (số nguyên)
//          + âm: dịch trái
//          + dương: dịch phải
// y: vị trí bắt đầu dịch
//          + y = 0: đầu file <=>ios::beg
//          + y = 1: vị trí hiện tại <=> ios::cur
//          + y = 2: vị trí cuối file <=> ios::end

// Đọc dãy số trong file input cách nhau bởi dấu chấm phảy
// Tìm UCLN và BCNN của dãy và ghi nó vào file output

#include <iostream>
#include <fstream>

using namespace std;

int FindGCD(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return a + b;
    }
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return a;
}

int FindLCM(int a, int b)
{
    return a * b / FindGCD(a, b);
}

int FindGCDArray(int a[], int n)
{
    int gcd = FindGCD(a[0], a[1]); 
    for (int i = 2; i < n; i++)
    {
        gcd = FindGCD(gcd, a[i]);
    }
    return gcd;
}

int FindLCMArray(int a[], int n)
{
    int lcm = FindLCM(a[0], a[1]); 
    for (int i = 2; i < n; i++)
    {
        lcm = FindLCM(lcm, a[i]);
    }
    return lcm;
}

void ReadFile(int a[], int &n, ifstream &FileIn)
{
    char temp;
    while (!FileIn.eof())
    {
        FileIn >> a[n];
        FileIn >> temp;
        n++;
    }
}

void WriteFile(int a[], int n, ofstream &FileOut)
{
    FileOut << "UCLN cua cac so trong file: " << FindGCDArray(a, n) << endl;
    FileOut << "BCNN cua cac so trong file: " << FindLCMArray(a, n);
}

int main()
{
    ifstream FileIn;
    FileIn.open("C:\\Users\\ADMIN\\OneDrive\\Documents\\Code\\Code C++\\File\\file5_in.txt", ios_base::in);
    int a[99];
    int n = 0;
    ReadFile(a, n, FileIn);
    FileIn.close();
    ofstream FileOut;
    FileOut.open("C:\\Users\\ADMIN\\OneDrive\\Documents\\Code\\Code C++\\File\\file5_out.txt", ios_base::out);
    WriteFile(a, n, FileOut);
    FileOut.close();
    return 0;
}