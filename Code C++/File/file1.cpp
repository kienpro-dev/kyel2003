#include <iostream>
#include <fstream>

using namespace std;

void DocFile()
{
	ifstream FileIn;
	FileIn.open("file1_in.txt", ios_base::in);
	if (FileIn.fail() == true)
	{
		cout << "File cua ban khong ton tai";
	}
	else
	{
		int x;
		int y;
		FileIn >> x;
		FileIn >> y;
		cout << x + y;
		FileIn.close();
	}
}

void GhiFile()
{
	ofstream FileOut;
	FileOut.open("file1_out.txt", ios_base::out);
	FileOut << "Nguyen Tien Kien aaaa";
	FileOut.close();
}

int main()
{
	DocFile();

	// GhiFile();
	return 0;
}
