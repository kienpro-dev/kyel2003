#include <iostream> //nhap toa do xy cua A va B, tinh do dai doan AB
#include <math.h>

using namespace std;

int main()
{
    cout << "Nhap toa do diem A: ";
    int xA, yA;
    cin >> xA >> yA;
    cout << "Nhap toa do diem B: ";
    int xB, yB;
    cin >> xB >> yB;
    double dodai;
    dodai = sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));
    cout << "Do dai doan AB: " << dodai << endl;
    system("PAUSE");
    return 0;
}