#include<iostream>
#include<fstream>
#include<string>

using namespace std;

struct MonHoc
{
    string name;
    float score;
};

struct SinhVien
{
    string name;
    long ma;
    string birth;
    MonHoc danhSachMonHoc[10];
};

int main()
{
    ifstream FileIn;
    FileIn.open("file7_in.txt",ios_base::in);

    return 0;
}