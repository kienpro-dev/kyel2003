#include<stdio.h> //in ra so luong ki tu x trong xau s
#include<string.h>

int main() {
    char s[100];
    gets(s);
    char c;
    scanf("%c",&c);
    int sl=0;
    for (int i=0;i<strlen(s);i++) {
        if (s[i]==c) {
            sl++;
        }
    } printf("%d",sl);
    return 0;
}