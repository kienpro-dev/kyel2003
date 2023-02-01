//kiem tra 1 so co phai so ngto k
#include<iostream>

using namespace std;

int main() 
{
    int n;
    cout << "Kiem tra so n: ";
    cin >> n;
    int uoc=0;
    if(n<2)
    {
        cout <<n<< " khong phai so nguyen to";
    } 
    else 
    {
        for (int i=2;i<n;i++)
        {
            if (n%i==0) 
            {
                uoc++;
            }
        } 
        if (uoc==0) 
            {
                cout <<n<< " la so nguyen to";
            } else 
            {
                cout <<n<< " khong phai so nguyen to";
            }
    }
    return 0;
}