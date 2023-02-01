//choi game doan so su dung ham
#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

void playonce();
void loopplay();

void playonce()
{
    int somay=1+rand()%100;
    int songuoi;
    int solan=0;
    cout << "AI vua chon 1 so [1,100]!"<<endl;
    while(solan<=7)
    {
        cout << "Den luot ban:";
        cin >> songuoi;
        solan++;
        cout << "Ban doan lan thu "<<solan<<endl;
        if(songuoi==somay)
        {
            cout << "Ban doan that chuan, AI chon so "<<somay<<endl;
            break;
        }
        else if (songuoi>somay)
        {
            cout <<"Ban doan sai, AI chon so nho hon!!"<<endl;
        }
        else 
        {
            cout << "Ban doan sai, AI chon so to hon!!"<<endl;
        }
        if(solan==7)
        {
            cout << "Ban doan sai qua 7 lan"<<endl;
            cout << "AI chon so "<<somay<<endl;
            break;
        }
    }
}

void loopplay()
{
    while (true)
    {
        playonce();
        char s;
        cout << "Ban muon choi tiep khong?\n";
        cin >> s;
        if (s=='k')
        {
            break;
        }
    }
    cout << "Cam on da choi game cung AI!!";
}

int main()
{
    srand(time(NULL));
    cout << "Chuong trinh doan so cung AI!!"<<endl;
    //playonce();
    loopplay();
    return 0;
}