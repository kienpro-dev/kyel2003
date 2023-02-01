#include<stdio.h>
#include<string.h> //kiem tra 2 xau co giong nhau k

int main() {
    char s[100],x[100];
    scanf("%s%s",s,x);
    if (strcmp(s,x)==0) {
        printf("Giong het");
    } else {
        printf("Khac vl");
    } return 0;
}