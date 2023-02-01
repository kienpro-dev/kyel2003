#include<stdio.h>//nhapab_dauranguoclai

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    int c=a;
    a=b;
    b=c;
    printf("a=%d\nb=%d",a,b);
    return 0;
}
