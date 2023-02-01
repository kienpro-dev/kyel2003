// ghi và đọc dữ liệu dạng nhị phân
#include <iostream>
#include <stdlib.h>

using namespace std;

struct BirthDay
{
    int day;
    int month;
    int year;
};

void WriteFile()
{
    FILE *f = fopen("file4.bin", "w");
    BirthDay n;
    n.day = 23;
    n.month = 7;
    n.year = 2003;
    fwrite(&n, sizeof(struct BirthDay), 1, f); // dia chi bien, kich thuoc, so luong bien, con tro file
    fclose(f);
}

void ReadFile()
{
    FILE *f = fopen("file4.bin", "r");
    BirthDay n;
    fread(&n, sizeof(struct BirthDay), 1, f);
    cout << "Ngay sinh: " << n.day << "/" << n.month << "/" << n.year;
    fclose(f);
}

int main()
{
    // WriteFile();
    ReadFile();

    return 0;
}