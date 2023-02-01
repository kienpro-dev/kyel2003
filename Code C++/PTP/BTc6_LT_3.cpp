//dãy fibonucci : 1 1 2 3 5 8 13 21 .....
// 2 số đầu tiên luôn bằng 1
// số tiếp theo bằng tổng 2 số trước
//TQ: fn=f(n-1)+f(n-2)
#include<iostream>

using namespace std;

int ReturnK(int k);
void OutFib(int n);

int ReturnK(int k)
{
    if(k<=2)
    {
        return 1;
    }    
    return ReturnK(k-1)+ReturnK(k-2);
}

void OutFib(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<ReturnK(i)<<"\t";
    }
}

int main()
{
    int k;
    cout << "Nhap vi tri so muon tim:";
    cin >> k;
    if(k<0)
    {
        cout <<"Vi tri khong hop le";
    }
    else
    {
        cout <<"So o vi tri "<<k<<" trong day:";
        cout<<ReturnK(k);
    }
    int n;
    cout << "\nNhap n:";
    cin >> n;
    cout << "\nDay fibonuci co "<<n<<" so"<<endl;
    OutFib(n);
    return 0;
}