#include<stdio.h> //tinh tong cac so le trong ab

int main() {
    int a,b;
    int sum=0;
    scanf("%d%d",&a,&b);
    for (int i=a;i<=b;i++) {
    if ( i % 2==1) {
        sum=sum+i;
    } 
    }printf("%d",sum);
    return 0;
}