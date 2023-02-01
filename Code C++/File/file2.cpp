#include <iostream>
#include <fstream>

using namespace std;

bool CheckPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int x;
    ifstream FileIn;
    FileIn.open("C:\\Users\\ADMIN\\OneDrive\\Documents\\Code\\Code C++\\PTP\\File\\file2_in.txt", ios_base::in);
    if (FileIn.fail())
    {
        cout << "File cua ban khong ton tai";
        return 0;
    }
    
    FileIn >> x;
    FileIn.close();
  
    ofstream FileOut;
    FileOut.open("C:\\Users\\ADMIN\\OneDrive\\Documents\\Code\\Code C++\\PTP\\File\\file2_out.txt", ios_base::out);
    if (CheckPrime(x))
    {
        FileOut << "True";
    }
    else
    {
        FileOut << "False";
    }
    FileOut.close();
    return 0;
}
