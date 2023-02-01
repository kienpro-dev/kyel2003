#include<stdio.h> //nhap n so trong mang a, tinh tich cac so do

int tichmang(int a[],int n) {
    if(n==1) return a[0];
    return a[n-1]*tichmang(a,n-1);
}
int main() {
    int n;
    int a[n];
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("%d",tichmang(a,n));
    return 0;
}