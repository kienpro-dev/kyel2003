// Cách đọc tập tin text file
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    FILE *file = fopen("file1_out.txt", "r"); // r: read
    char a[99];
    while(fgets(a,99,file)!=NULL)
    {
        cout << a;
    }
    fclose(file);
    return 0;
}