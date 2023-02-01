// in ra danh sach 5 svien, dem so nam so nu
#include <iostream>
#include <string.h>

using namespace std;

void List(char **str);
bool NamHayNu(char *str);
int main()
{
    char **DSSV = new char *[5];
    for (int i = 0; i < 5; i++)
    {
        *(DSSV + i) = new char[255];
    }
    List(DSSV);
    int nam = 0, nu = 0;
    for (int i = 0; i < 5; i++)
    {
        bool kq = NamHayNu(*(DSSV + i));
        if (kq == true)
        {
            nam++;
        }
        else
        {
            nu++;
        }
    }
    cout << "So sinh vien nam la " << nam << endl;
    cout << "So sinh vien nu la " << nu << endl;
    return 0;
}

void List(char **str)
{
    strcpy(*(str + 0), "SV1\t\tNguyenTienKien\t\tNam");
    strcpy(*(str + 1), "SV2\t\tNguyenVanDong\t\tNam");
    strcpy(*(str + 2), "SV3\t\tNguyenThiSu\t\tNu");
    strcpy(*(str + 3), "SV4\t\tHoangXuanTien\t\tNam");
    strcpy(*(str + 4), "SV5\t\tLeGiaHan\t\tNu");
    for (int i = 0; i < 5; i++)
    {
        cout << *(str + i) << endl;
    }
}

bool NamHayNu(char *str)
{
    int j = 0;
    for (int i = strlen(str); i >= 0; i--)
    {
        if (str[i] == '\t')
        {
            j = i;
            break;
        }
    }
    char gioiTinh[5];
    int i2 = 0;
    for (int i = j + 1; i < strlen(str); i++)
    {
        gioiTinh[i2] = str[i];
        i2++;
    }
    gioiTinh[i2] = '\0';
    if (strcmp(gioiTinh, "Nam") == 0)
        return true;
    return false;
}