#include<stdio.h> //tim-so-uoc-cua-1sobatki 

int main() {
    int n;
    int uoc=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        if (n%i==0) {
            uoc++;
        }
    }printf("%d",uoc);
    return 0;
}