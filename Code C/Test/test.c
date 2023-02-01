#include <stdio.h>
#include <string.h>

void Left(char a[], int n)
{
    int i;
    char c = a[0];
    for (i = 0; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    a[n - 1] = c;
    puts(a);
}

void right(char b[], int m)
{
    int i;
    char c = b[m - 1];
    for (i = m - 1; i >= 0; i--)
    {
        b[i] = b[i - 1];
    }
    b[0] = c;
    puts(b);
}

int main()
{
    char a[10];
    gets(a);
    int n = strlen(a);
    Left(a, n);
    char b[10];
    gets(b);
    int m = strlen(b);
    right(b, m);
    return 0;
}