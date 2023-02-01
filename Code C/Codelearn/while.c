#include<stdio.h> //so uoc cua 1 so

int main() {
    int a;
    int uoc=0;
    int b=1;
    scanf("%d",&a);
    while (b<=a) {
        if (a%b==0) {
            uoc++;
        }b++;
    }
    printf("%d",uoc);
    return 0;
}