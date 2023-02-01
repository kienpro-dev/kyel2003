// con trỏ cấp 2 và mảng 2 chiều
#include<iostream>

using namespace std;

int main()
{
    int n,m;
    cout << "Nhap so mang con tro:";
    cin >> n;
    cout << "Nhap so con tro moi mang:";
    cin >> m;
    int **p=new int*[n]; // cách khai báo con trỏ cấp 2 và cấp phát bộ nhớ với n mảng con trỏ
    for(int i=0;i<n;i++)
    {
        *(p+i)=new int[m]; // hoặc p[i]=new int*[m]
                            // cấp phát bộ nhớ n mảng con trỏ với m con trỏ mỗi mảng
    }
    cout << "Con tro cap 2 voi "<<n<<" hang "<<m<<" cot:"<<endl;
    for(int i=0;i<n;i++) // dùng mảng 2 chiều gán giá trị và truy xuất trong con trỏ cấp 2
    {
        for(int j=0;j<m;j++)
        {
            *(*(p+i)+j)=i+j; // Có thể thay *(*(p+i)+j) thành p[i][j] và i+j thành 1 giá trị khác
            cout <<*(*(p+i)+j)<<"\t";
        }
        cout <<endl;
    }
    // thu hồi bộ nhớ: chỗ nào có new thì phải delete
    for(int i=0;i<n;i++)
    {
        delete *(p+i);
        *(p+i)=NULL; //nếu muốn chắc chắn
    }
    delete p;
    p=NULL;//Nếu muốn chắc chắn
    return 0;
}