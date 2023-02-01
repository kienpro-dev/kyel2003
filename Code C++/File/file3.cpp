#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream FileIn;
    FileIn.open("C:\\Users\\ADMIN\\OneDrive\\Documents\\Code\\Code C++\\PTP\\File\\file3_in.txt", ios_base::in);
    if (FileIn.fail())
    {
        cout << "Khong co file";
        return 0;
    }
    int a[99];
    int i = 0;
    int cnt = 0;
    while (!FileIn.eof()) // eof(): end of file, kiem tra con tro chi vi da den cuoi file hay chua
    {
        FileIn >> a[i];
        i++;
        cnt++;
    }
    FileIn.close();

    ofstream FileOut;
    FileOut.open("C:\\Users\\ADMIN\\OneDrive\\Documents\\Code\\Code C++\\PTP\\File\\file3_out.txt", ios_base::out);
    FileOut << "Du lieu trong File: " << cnt;
    FileOut << "\nDu lieu chan: ";
    for (int i = 0; i < cnt; i++)
    {
        if (a[i] % 2 == 0)
        {
            FileOut << a[i] << " ";
        }
    }
    FileOut << "\nDu lieu le: ";
    for (int i = 0; i < cnt; i++)
    {
        if (a[i] % 2 != 0)
        {
            FileOut << a[i] << " ";
        }
    }
    FileOut.close();
    return 0;
}
