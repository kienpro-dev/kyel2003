#include<stdio.h> //nhap 2 mang, max 2 mang

int maxmang(int a[],int n) {
    int max=a[0];
    for (int i=0;i<=n;i++) {
        if (a[i]>max) {
            max=a[i];
        }
    }
    return max;
}
int main() {
    int n1,n2;
    int a1[1000],a2[1000];
    scanf("%d",&n1);
    for (int i=0;i<=n1;i++) {
        scanf("%d ",&a1[i]);
    }
    scanf("%d",&n2);
    for (int i=0;i<=n2;i++) {
        scanf("%d ",&a2[i]);
    }
    printf("%d va %d",maxmang(a1,n1),maxmang(a2,n2));
    return 0;
}