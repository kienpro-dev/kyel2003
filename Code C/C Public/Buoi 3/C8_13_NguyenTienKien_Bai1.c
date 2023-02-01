#include <stdio.h>

int main()
{
    printf("Day so giam dan tu 100->1:\n");
    int i = 100;
    printf("- for loop:\n");
    for (i; i >= 1; i--)
    {
        printf("%d ", i);
    }
    printf("\n- while loop:\n");
    i = 100;
    while (i >= 1)
    {
        printf("%d ", i);
        i--;
    }
    i = 100;
    printf("\n- do while loop:\n");
    do
    {
        printf("%d ", i);
        i--;
    } while (i >= 1);
    return 0;
}