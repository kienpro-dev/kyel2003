//parameter mặc định
#include<iostream>

using namespace std;

void Hamgido(int x, int y=5)//khi trong main không gán gtri cho y thì mặc định y=5
{
    cout<<x+y;
}
int main()
{
    int x,y;
    Hamgido(8);
    return 0;
}