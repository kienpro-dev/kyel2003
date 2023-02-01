#include<iostream>

using namespace std;

int main() 
{
    int a,b,c;
    cin >> a >> b >> c;
    int ratio = min(a,min(b/2,c/4));
    cout << ratio + ratio*2 +ratio*4;
    return 0;
}