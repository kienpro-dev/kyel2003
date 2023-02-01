#include <stdio.h>

int main()
{
    printf("Day so tang dan tu 0->99:\n");
    int i = 0;
    for (i; i <= 99; i++)
    {
        printf("%d\t", i);
        if (i % 10 == 9)
        {
            printf("\n");
        }
    }
    return 0;
}