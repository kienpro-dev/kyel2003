//viet in hoa thanh in thuong
#include<stdio.h>
#include<string.h>

void show(char s[100]) {
    for (int i=0;i<strlen(s);i++) {
        if (s[i]>='A' && s[i]<='Z') {
            s[i]+=32;
        }
    } printf("%s\n",s);
}
int main() {
    char s1[100],s2[100];
    scanf("%s %s",s1,s2);
    show(s1);
    show(s2);
    return 0;
}