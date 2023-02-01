#include<stdio.h> //nhap n so, in ra so lon nhat

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) {
        scanf("%d ",&a[i]);
    } int max=0;
    for (int i=0;i<n;i++) {
        if (a[i] > max) {
            max=a[i];
        }
    } printf("%d",max);
    return 0;
}