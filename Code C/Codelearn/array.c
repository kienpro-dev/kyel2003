#include<stdio.h> //nhap n so, tinh tong cua no

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    } int tong=0;
    for (int i=0;i<n;i++) {
        tong=tong+a[i];
    } printf("%d",tong);
    return 0;
}