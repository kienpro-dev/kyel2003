//nhap vao ten 1 nguoi, viet ham xoa cac khoang trang du thua neu co
// dua ten ra man hinh
#include<iostream>
#include<string.h>

using namespace std;

void deleteSpace(char *str);
char *returnFirstName(char *str);

int main()
{
    char *fullName=new char[255];
    cout << "Nhap ten:";
    gets(fullName);
    deleteSpace(fullName);
    cout << "Ten day du cua ban: "<<fullName<<endl;
    char *firstName=returnFirstName(fullName);
    cout << "Ten cua ban: "<<firstName;
    return 0;
}

void deleteSpace(char *str)
{
    int j=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]!=' ')
        {
            str[j]=str[i];
            j++;
        }
        else if(str[i+1]!=' ' && j>0)
        {    
            str[j]=str[i];
            j++;
        }
    }
    if(str[j-1]==' ')
        str[j-1]='\0';
    else
        str[j]='\0';
}

char *returnFirstName(char *str)
{
    char *firstName=new char[10];
    strcpy(firstName,"");
    int j=0;
    for(int i=strlen(str);i>=0;i--)
    {
        if(str[i]==' ')
        {
            j=i+1;
            break;
        }
    }
    int i2=0;
    for(int i=j;i<strlen(str);i++)
    {
        firstName[i2]=str[i];
        i2++;
    }
    return firstName;
}