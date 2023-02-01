#include <stdio.h>
#include <math.h>
#include <conio.h>

void main()
{
    int n;
    printf("Nhap n:");
    scanf("%d", &n);
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
}