// xư lý mảng trong file
#include <iostream>
#include <stdlib.h>

using namespace std;

void FileOut(int x)
{
    FILE *f = fopen("file5_out.txt", "a");
    char s[5];
    itoa(x, s, 10);
    fputs(s, f);
    fputs(" ", f);
    fclose(f);
}

int main()
{
    FILE *f = fopen("file5_in.txt", "r");
    while (true)
    {
        char *line = NULL;
        char buffer[5];
        line = fgets(buffer, 5, f);
        if (line != NULL)
        {
            int num = atoi(line);
            if (num % 2 == 0)
            {
                FileOut(num);
            }
        }
        else
        {
            break;
        }
    }
    return 0;
}