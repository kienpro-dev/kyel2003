// Ghi cấu trúc xuống tập tin
// đọc cấu trúc từ tập tin
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

struct NhanVien
{
    int ma;
    char name[25];
};

void XuatDS(NhanVien dsNV[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << dsNV[i].ma << "\t" << dsNV[i].name << endl;
    }
}

void LuuFile()
{
    NhanVien dsNV[3];
    dsNV[0].ma = 1;
    strcpy(dsNV[0].name, "Kien");
    dsNV[1].ma = 2;
    strcpy(dsNV[1].name, "Dung");
    dsNV[2].ma = 3;
    strcpy(dsNV[2].name, "Tien");
    ofstream outfile("file3_in.txt", ofstream::binary);
    outfile.write((char *)dsNV, sizeof(dsNV));
    outfile.close();
}

void DocFile()
{
    ifstream infile("file3_in.txt", ifstream::binary);
    infile.seekg(0, infile.end);
    int size = infile.tellg();
    infile.seekg(0);
    int size_real = size / sizeof(NhanVien);
    NhanVien dsNV[size_real];
    infile.read((char *)dsNV, sizeof(dsNV));
    infile.close();
    XuatDS(dsNV, size_real);
}

int main()
{
    LuuFile();
    DocFile();
    return 0;
}