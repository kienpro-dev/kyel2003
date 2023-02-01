#include<iostream>
#include<math.h>

using namespace std;

int main() 
{
    int n,a,b;
    cin >> n >> a >> b;
    if(n*1.0/a == sqrt(2*n*1.0/b))
        cout << 0;
    else if(n*1.0/a > sqrt(2*n*1.0/b))
        cout << 2;
    else
        cout << 1;
    return 0;
}