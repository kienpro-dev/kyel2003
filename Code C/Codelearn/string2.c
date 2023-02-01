#include<stdio.h> //in ra so thu k trong xau

int main() {
    char s[100];
    scanf("%s",s);
    int k;
    scanf("%d",&k);
    printf("%c",s[k-1]);
    return 0;
}