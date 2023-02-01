//tham trị và tham biến
#include<iostream>

using namespace std;

void Show1(int x); /*tham trị, 
                    gán giá trị x ở hàm main, 
                    x đưa vào Show1 thay đổi giá trị, 
                    sau khi thoát khỏi hàm thì x trở về ban đầu*/
void Show1(int x)
{
    x=5;
    cout << "Gia tri x trong Show1: "<<x<<endl;
}

void Show2(int x);/*tham biến, 
                    gán giá trị x ở hàm main, 
                    x đưa vào Show2 thay đổi giá trị, 
                    sau khi thoát khỏi hàm thì x giữ nguyên giá trị sau thay đổi*/
void Show2(int x)
{
    x=5;
    cout << "Gia tri y trong Show2: "<<x<<endl;
}
int main()
{
    int x;
    cout<<"Nhap x:";
    cin >> x;
    cout << "Gia tri x ban dau: "<<x<<endl;
    Show1(x);
    cout << "Gia tri x sau khi ra khoi Show1: "<<x<<endl;
    int y;
    cout << "Nhap y:";
    cin >> y;
    cout << "Gia tri y ban dau: "<<y<<endl;
    Show2(y);
    cout << "Gia tri y sau khi ra khoi Show2: "<<y<<endl;
    return 0;
}