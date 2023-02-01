#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <conio.h>
#include <ctime>
#include <vector>
#include "windows.h"
using namespace std;

void SetColor(WORD color)
{
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

	WORD wAttributes = screen_buffer_info.wAttributes;
	color &= 0x000f;
	wAttributes &= 0xfff0;
	wAttributes |= color;

	SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}

int main()
{
	string ngiu;
	while (true)
	{
		system("cls");
		cout << endl
			 << endl;
		cout << "\t\t NAY NGAY BAO NHIEU VAY MOI NGUOI? ";
		getline(cin, ngiu);
		if (ngiu == "23/12/2021")
		{
			cout << "\t\t---CHINH XAC HOM NAY  LA SINH NHAT BAN THE DEEP TRY !---" << endl
				 << endl;
			Sleep(2500);
			cout << "\t\t18 TUOI DU TUOI DI TU" << endl;
			Sleep(2000);
			cout << "\t\tCHUAN BI TIEN TIEU KHONG HET" << endl;
			Sleep(2000);
			cout << "\t\tSINH NHAT VUI VEEEEEEE!!" << endl;
			Sleep(2000);

			vector<int> A;
			A.push_back(7);
			A.push_back(12);
			A.push_back(14);
			A.push_back(10);
			while (true)
			{
				int i = 0;
				SetColor(A.at(i++ % A.size()));

				ifstream file;
				file.open("C:\\Users\\ADMIN\\Downloads\\banner.txt", ios_base::in);
				string line;
				while (getline(file, line))
				{
					cout << line << endl;
					Sleep(50);
				}
				file.close();

				SetColor(A.at(i++ % A.size()));
				ifstream file2;
				file2.open("C:\\Users\\ADMIN\\Downloads\\banner1.txt", ios_base::in);
				string line2;
				while (getline(file2, line2))
				{
					cout << line2 << endl;
					Sleep(50);
				}
				file2.close();

				SetColor(A.at(i++ % A.size()));
				ifstream file3;
				file3.open("C:\\Users\\ADMIN\\Downloads\\banner5.txt", ios_base::in);
				string line3;
				while (getline(file3, line3))
				{
					cout << line3 << endl;
					Sleep(50);
				}
				file3.close();

				SetColor(A.at(i++ % A.size()));
				ifstream file4;
				file4.open("C:\\Users\\ADMIN\\Downloads\\banner4.txt", ios_base::in);
				string line4;
				while (getline(file4, line4))
				{
					cout << line4 << endl;
					Sleep(50);
				}
				file4.close();
			}
			_getch();
		}
		else
		{
			cout << "\t\tSAI ROI ;((" << endl
				 << endl;
			system("pause");
		}
	}
}
