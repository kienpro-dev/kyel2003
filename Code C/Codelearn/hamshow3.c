#include<stdio.h> //tra ve tong cac so trong mang

int tinhtong(int a[],int n) {
    int tong=0;
    for (int i=0;i<n;i++) {
        tong+=a[i];
    }
    return tong;
}
int main() {
    int n;
    int a[1000];
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("%d",tinhtong(a,n));
    return 0;
}