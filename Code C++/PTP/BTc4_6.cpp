//ve hinh chong chong, chu nhat, tam giac vuong can
#include<iostream>
#include<string.h>

using namespace std;

int main() 
{
    cout << "Chuong trinh ve hinh theo yeu cau!\n";
    while(true)
    {
        string s;
        cout << "Nhap hinh: ";
        cin >> s;
        if (s=="chongchong")
        {
            int h;
            cout << "Nhap chieu cao: ";
            cin >> h;
            for (int i=0;i<h;i++) 
            {
                for (int j=0;j<h;j++) 
                {
                    if ((j==0 && i<=h/2) || i==j || i==h/2 || (j==h-1 && i>=h/2)) 
                    {
                        cout << ".";
                    } else 
                    {
                        cout << " ";
                    }
                }
                cout << "\n";
            }
        } else if (s=="chunhat")
        {
            int cr,cd;
            cout << "Nhap chieu dai: ";
            cin >> cd;
            cout << "Nhap chieu rong: ";
            cin >> cr;
            if (cd>cr)
            {
                for (int i=0;i<cd;i++) 
                {
                    for (int j=0;j<cr;j++) 
                    {
                        if (i==0 || i==cd-1 || j==0 || j==cr-1) 
                        {
                            cout << ".";
                        } else 
                        {
                            cout << " ";
                        }
                    }
                    cout << "\n";
                }
            } else 
            {
                cout << "Hinh khong hop le";
            }
        } else if (s=="tamgiacvuongcan")
        {
            cout << "Nhap canh goc vuong: ";
            int h;
            cin >> h;
            for (int i=0;i<h;i++) 
            {
            for(int j=0;j<h;j++) 
            {
                if (j==0 || i==h-1 || i==j) 
                {
                    cout << ".";
                } else 
                {
                    cout << " ";
                }
            }
            cout << "\n";
            }
        } else 
        {
            cout << "Sai cu phap hoac hinh ve chua duoc cap nhat..."<<endl;
        }
        cout << "Ban muon ve tiep k?"<<endl;
        string s2;
        cin >> s2;
        if (s2=="khong")
        {
            break;
        }
    }
    cout << "BYE!";
    return 0;
}