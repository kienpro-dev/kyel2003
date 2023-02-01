// đọc file input dòng đầu có số lượng phân số
// các dòng sau là các phân số dạng a/b
// rút gọn các phân số và lưu qua file khác
// tìm phân số lớn nhất và lưu qua file khác

#include <iostream>
#include <fstream>

using namespace std;

struct PhanSo
{
    int tu;
    int mau;
};

struct DSPS
{
    PhanSo dsps[99];
    int n;
};

void DocPhanSo(PhanSo &ps, ifstream &FileIn)
{
    FileIn >> ps.tu;
    char temp;
    FileIn >> temp;
    FileIn >> ps.mau;
}

void DocFile(DSPS &ds, ifstream &FileIn)
{
    FileIn >> ds.n;
    for (int i = 0; i < ds.n; i++)
    {
        DocPhanSo(ds.dsps[i], FileIn);
    }
}

int FindGCD(int a, int b)
{
    if (a == 0 || b == 0)
        return a + b;
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

void RutGon(PhanSo &ps)
{
    int uoc = FindGCD(ps.tu, ps.mau);
    ps.tu /= uoc;
    ps.mau /= uoc;
}

void GhiFilePSTG(DSPS &ds, ofstream &FileOut)
{
    FileOut << "Phan so duoc toi gian:" << endl;
    for (int i = 0; i < ds.n; i++)
    {
        RutGon(ds.dsps[i]);
        FileOut << ds.dsps[i].tu << "/" << ds.dsps[i].mau << endl;
    }
}

void GhiFilePSMAX(DSPS &ds, ofstream &FileOut)
{
    FileOut << "Phan so lon nhat: ";
    float max = ds.dsps[0].tu * 1.0 / ds.dsps[0].mau;
    int max_i;
    for (int i = 1; i < ds.n; i++)
    {
        if (max < ds.dsps[i].tu * 1.0 / ds.dsps[i].mau)
        {
            max_i = i;
        }
    }
    FileOut << ds.dsps[max_i].tu << "/" << ds.dsps[max_i].mau;
}

int main()
{
    ifstream FileIn;
    FileIn.open("file6_in.txt", ios_base::in);
    DSPS ds;
    DocFile(ds, FileIn);
    FileIn.close();

    ofstream FileOut;
    FileOut.open("file6_out_1.txt", ios_base::out);
    GhiFilePSTG(ds, FileOut);
    FileOut.close();

    ofstream FileOut_2;
    FileOut_2.open("file6_out_2.txt", ios_base::out);
    GhiFilePSMAX(ds, FileOut_2);
    FileOut_2.close();
    return 0;
}