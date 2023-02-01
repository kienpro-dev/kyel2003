//nhap vao mang cac gia tri tang dan, neu nhap sai yeu cau nhap lai
#include<iostream>

using namespace std;

int main() 
{
    int n;
    cout <<"Nhap so phan tu: ";
    cin >> n;
    int arr[n];
    int i=0;
    while(i<n)
    {
        cout<<"Nhap arr["<<i<<"]: ";
        cin >> arr[i];
        if(i>0 && arr[i]<=arr[i-1])
        {
            cout<<"Du lieu sai, nhap lai!!"<<endl;
            continue; // sẽ yêu cầu quay lại arr[i] để nhập lại, 
            //cách dùng continue này không áp dumhj với for vì thứ tự thực hiện khác while
        }
        i++;
    }
    cout << "Cac phan tu mang tang dan:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}