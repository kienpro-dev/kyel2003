//Chuong trinh choi game doan so
#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main() 
{
    srand(time(NULL));//mỗi lần chạy chương trình thì máy sẽ chọn một số ngẫu nhiên
    cout << "Chuong trinh choi game doan so cung AI!!!"<<endl;
    while (true) //vong lap vinh cuu
    {
        int somay=1+rand()%100;//rand()%n sẽ chọn 1 số từ 0=>n-1
        cout << "AI da doan 1 so tu [1,100]"<<endl;
        int solandoan=0;
        while (solandoan<=7)
        {
            cout << "Doan so di ku: ";
            int songuoi;
            cin >> songuoi;
            solandoan++;
            cout << "Doan lan thu "<<solandoan<<endl;
            if (songuoi==somay) 
            {
                cout << "Doan chuan vler, AI chon so "<<somay<<endl;
                break;
            } else if (somay>songuoi) 
            {
                cout << "AI chon so to hon!!!Non"<<endl;
            } else 
            {
                cout << "AI chon so nho hon!!!Non"<<endl;
            }
            if (solandoan==7)
            {
                break;
            }
        }
        if (solandoan==7)
        {
            cout << "LOSERRR!!! Doan sai qua 7 lan"<<endl;
            cout << "AI chon so "<<somay<<endl;
        }
        cout << "Choi tiep khong ku"<<endl;
        string s;
        cin >> s;
        if (s=="khong") 
        {
            break;
        }
    }
    cout << "BYE ga";
    return 0;
}