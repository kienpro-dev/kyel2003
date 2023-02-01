#include <iostream>
#include <stdlib.h>

using namespace std;

void in(int *a, int &n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; //*(a+i)
    }
}

void out(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(a + i) << " "; // a[i]
    }
}

int main()
{
    // int *p=(int *)malloc(5 * sizeof(int)); //1 loại cấp phát động mảng 1 chiều
    int *p = (int *)calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        cin >> p[i]; //*(a+i)
    }
    for (int i = 0; i < 5; i++)
    {
        cout << *(p + i) << " "; // a[i]
    }
    p = (int *)realloc(p, 10*sizeof(int));
    for (int i = 5; i < 10; i++)
    {
        cin >> *(p + i); //*(a+i)
    }
    for (int i = 0; i < 10; i++)    
    {
        cout << *(p + i) << " "; // a[i]
    }
    return 0;
}