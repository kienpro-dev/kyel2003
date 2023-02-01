#include<stdio.h> //chuyen in thuong thanh in hoa
#include<string.h>

int main() {
    char s[100];
    gets(s);
    for (int i=0;i<strlen(s);i++) {
        if (s[i]>='a' && s[i] <='z') {
            s[i]-=32;
        }
    } printf("%s",s);
    return 0;
}