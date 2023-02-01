// tinh ra gri bieu thuc co so mu la n
#include <iostream>
#include <math.h> //su dung pow tinh mu va sqrt tinh can bac 2
// cu phap pow(x,n) tinh x mu n, sqrt(x) can bac 2 cua x

using namespace std;

int main()
{
    int x, n;
    int A;
    cout << "Nhap x va n: ";
    cin >> x >> n;
    A = pow(pow(x, 2) + x + 1, n) + pow(pow(x, 2) - x + 1, n);
    cout << "Gia tri bieu thuc A = " << A;
    return 0;
}