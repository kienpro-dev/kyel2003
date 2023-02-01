//tính đệ quy giai thừa và chuyển hệ số 10->2
#include<iostream>

using namespace std;

int GiaiThua(int n);
void H10toH2(int n);

int GiaiThua(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*GiaiThua(n-1);
}

void H10toH2(int n)
{
    if(n>0)
    {
        int t=n%2;
        H10toH2(n/2);
        cout <<t<<" ";//vì đệ quy hoạt động theo kiểu LIFO(vào sau ra trước)
                    //nên biến t không cần dùng thuật toán chuyển đổi để cho ra kq ngược
    }                
}

int main()
{
    cout << "Tinh giai thua 1 so"<<endl;
    int a;
    cout << "Nhap a:";
    cin >> a;
    cout << "Ket qua "<<a<<"! = "<<GiaiThua(a)<<endl;
    cout << "Chuyen so tu he thap phan sang he nhi phan"<<endl;
    int x;
    cout << "Nhap n(10):";
    cin >> x;
    H10toH2(x);
    return 0;
}