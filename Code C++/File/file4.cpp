// Đọc dãy số trong file input cách nhau bởi dấu cách
// Kiểm tra số amstrong và ghi nó vào file output
// Số armstrong là số mà từng chữ số trong số đó lũy thừa với số chữ số của nó bằng chính nó

#include<iostream>
#include<fstream>
#include<cmath>

using namespace std;

void ReadFile(int a[], int &n, ifstream &FileIn)
{
    while(!FileIn.eof())
    {
        FileIn >> a[n];
        n++;
    }
}

bool CheckArmstrong(int n)
{
    int cnt=0;
    int temp=n;
    int sum=0;
    int x;
    for(int i=n;i>0;i/=10)
    {
        x=i%10;
        cnt++;
    }
    n=temp;
    for(int i=n;i>0;i/=10)
    {
        sum+=pow(i%10,cnt);
    }
    if(sum==n)
    {
        return true;
    }
    return false;
}

void WriteFile(int a[], int n, ofstream &FileOut)
{
    FileOut << "So Amstrong trong file: ";
    for(int i=0;i<n;i++)
    {
        if(CheckArmstrong(a[i]))
        {
            FileOut << a[i] << " ";
        }
    }
}

int main()
{
    ifstream FileIn;
    FileIn.open("C:\\Users\\ADMIN\\OneDrive\\Documents\\Code\\Code C++\\PTP\\File\\file4_in.txt", ios_base::in);
    int a[99];
    int n=0;
    ReadFile(a,n,FileIn);
    FileIn.close();
    ofstream FileOut;
    FileOut.open("C:\\Users\\ADMIN\\OneDrive\\Documents\\Code\\Code C++\\PTP\\File\\file4_out.txt", ios_base::out);
    WriteFile(a,n,FileOut);
    FileOut.close();
    return 0;
}

