#include<stdio.h> // tinh giai thua bang ham de quy

int giaithua(int n) {
    if (n==1) return 1;
    return n*giaithua(n-1);
}
int main() {
    int n;
    scanf("%d",&n);
    printf("Giai thua cua %d la %d",n,giaithua(n));
    return 0;
}