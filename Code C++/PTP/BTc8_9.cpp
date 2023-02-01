//nhập vào chuỗi, tách lấy từ dầu và các từ còn lại
//                tách lấy từ cuối và các từ còn lại
#include<iostream>
#include<string.h>

using namespace std;

#define MAX 255

void returnlastName(char *fullName, char *&lastName, char *&remain);
void returnfirstName(char *fullName, char *&firstName, char *&remain2);

int main()
{
    char *fullName=new char[MAX];
    cout << "Nhap ten day du cua ban:";
    gets(fullName);
    char *lastName=new char[MAX];
    char *remain=new char[MAX];
    strcpy(lastName,"");
    strcpy(remain,"");
    returnlastName(fullName, lastName, remain);
    cout <<"Ho: "<<lastName<<endl;
    cout <<"Ten: "<<remain<<endl;
    cout <<"-------------------------"<<endl;
    char *firstName=new char[MAX];
    char *remain2=new char[MAX];
    strcpy(firstName,"");
    strcpy(remain2,"");
    returnfirstName(fullName, firstName, remain2);
    cout <<"Ten: "<<firstName<<endl;
    cout <<"Ho Dem: "<<remain2<<endl;
    return 0;
}

void returnlastName(char *fullName, char *&lastName, char *&remain)
{
    // Nguyen Tien Kien
    char *space=strchr(fullName, ' ');
    int lenOfLastname=space-fullName;
    strncpy(lastName, fullName, lenOfLastname);
    space++;
    remain=space;
}
void returnfirstName(char *fullName, char *&firstName, char *&remain2)
{
    int space2=0;
    for(int i=strlen(fullName)-1;i>=0;i--)
    {
        if(fullName[i]==' ')
        {
            space2=i+1;
            break;
        }
    }
    int i2=0;
    for(int i=space2;i<strlen(fullName);i++)
    {
        firstName[i2]=fullName[i];
        i2++;
    }
    strncpy(remain2, fullName, space2-1);
}
/*    //neiK neiT NeyugN
    int i2=0;
    char *fullName2=new char[MAX];
    char *firstName=new char[MAX];
    char *remain=new char[MAX];
    for(int i=strlen(fullName)-1;i>=0;i--)
    {
        fullName2[i2]=fullName[i];
        i2++;
    }
    char *space=strchr(fullName2, ' ');
    int lenOfFirstname=space-fullName2;
    strncpy(firstName, fullName2, lenOfFirstname);
    space++;
    remain=space;
    for(int i=strlen(firstName)-1;i>=0;i--)
    {
        firstName2[i2]=firstName[i];
        i2++;
    }
    for(int i=strlen(remain)-1;i>=0;i--)
    {
        remain2[i2]=remain[i];
        i2++;
    }
*/