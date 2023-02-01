#include<stdio.h> //in ra cac so chia het cho 9 trong ab

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    do {
        if (a%9==0) {
            printf("%d ",a);
        } a++;
    } while (a<=b);
    return 0;
}