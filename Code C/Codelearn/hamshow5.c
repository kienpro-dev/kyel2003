#include<stdio.h> //tra ve so phan tu chan trong mang

int chanmang(int a[1000],int n) {
    int sl=0;
    for (int i=0;i<n;i++) {
        if (a[i]%2==0) {
            sl++;
        }
    }
    return sl;
}
int main() {
    int n;
    int a[1000];
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        scanf("%d ",&a[i]);
    }
    printf("So luong so chan la %d",chanmang(a, n));
    return 0;
}