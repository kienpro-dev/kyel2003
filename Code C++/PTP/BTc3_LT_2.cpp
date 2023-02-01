// doc so co toi da 2 chu so
#include <iostream>

using namespace std;

int main()
{
    cout << "Nhap so hang: ";
    int a;
    cin >> a;
    if (a >= 0 && a < 100)
    {
        int hangchuc = a / 10;
        int hangdonvi = a % 10;
        if (a >= 10)
        {
            switch (hangchuc)
            {
            case 1:
                cout << "Muoi ";
                break;
            case 2:
                cout << "Hai muoi ";
                break;
            case 3:
                cout << "Ba muoi ";
                break;
            case 4:
                cout << "Bon muoi ";
                break;
            case 5:
                cout << "Nam muoi ";
                break;
            case 6:
                cout << "Sau muoi ";
                break;
            case 7:
                cout << "Bay muoi ";
                break;
            case 8:
                cout << "Tam muoi ";
                break;
            case 9:
                cout << "Chin muoi ";
                break;
            }
            switch (hangdonvi)
            {
            case 1:
                cout << "mot";
                break;
            case 2:
                cout << "hai";
                break;
            case 3:
                cout << "ba";
                break;
            case 4:
                cout << "bon";
                break;
            case 5:
                cout << "lam";
                break;
            case 6:
                cout << "sau";
                break;
            case 7:
                cout << "bay";
                break;
            case 8:
                cout << "tam";
                break;
            case 9:
                cout << "chin";
                break;
            }
        }
        else
        {
            switch (hangdonvi)
            {
            case 1:
                cout << "Mot";
                break;
            case 2:
                cout << "Hai";
                break;
            case 3:
                cout << "Ba";
                break;
            case 4:
                cout << "Bon";
                break;
            case 5:
                cout << "Nam";
                break;
            case 6:
                cout << "Sau";
                break;
            case 7:
                cout << "Bay";
                break;
            case 8:
                cout << "Tam";
                break;
            case 9:
                cout << "Chin";
                break;
            default:
                cout << "Khong";
                break;
            }
        }
    }
    else
    {
        cout << "So chua ho tro o phien ban hien tai.";
    }
    return 0;
}