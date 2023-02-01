//in ra cac so ngto tu 1 den n
#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
    int n,k;
    cout << "Nhap k: ";
    cin >> k;
    cout << "Nhap n: ";
    cin >> n;
    if (k>0 && n>0 && k<n)
    {
        cout << "Cac so nguyen to thuoc doan [k,n]: "<<endl;
        for (int i=k;i<=n;i++) 
        {
            int uoc=0;
            for (int j=2;j<=sqrt(i);j++) 
            {
                if (i%j==0)
                {
                    uoc++;
                }
            }
            if (uoc==0 && i>1) 
            {
                cout <<i<<" ";
            }
        }
    }
    else
    {
        cout << "Du lieu khong hop le!";
    }
    return 0;
}