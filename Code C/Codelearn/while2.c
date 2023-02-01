#include<stdio.h> //tinhluythua,lay a nhan voi chinh no b lan

int main() {
    int a,b;
    long long mu=1;
    scanf("%d%d",&a,&b);
    while (b>0) {
        mu*=a; //mu=mu*a
        b--;// moi lan lap xe giam di b den khi b=1
    } printf("%lld",mu);
    return 0;
}
