#include<iostream>
#include<string>

using namespace std;

int main() 
{
    string pass;
    cin >> pass;
    int n=pass.length();
    bool check_1=false,check_2=false,check_3=false,check_4=false;
    if(n>=5)
        check_1=true;
    for(int i=0; i<n; i++)
    {
        if(pass[i]>='A' && pass[i]<='Z')
            check_2=true;
        else if(pass[i]>='a' && pass[i]<='z')
            check_3=true;
        else if(pass[i]>='0' && pass[i]<='9' || pass[i]=='!' || pass[i]=='?' || pass[i]=='.'|| pass[i]=='_'|| pass[i]==',')
            check_4=true;
    }
    if(check_1==true && check_2==true && check_3==true && check_4==true)
        cout << "Correct";
    else
        cout << "Too weak";
    return 0;
}