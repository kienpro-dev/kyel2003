/* nhap xau s, bien ki ta 3 cua sau s thanh ki tu e
*/
#include<stdio.h>
#include<string.h>

int main() {
    char s[100];
    gets(s);
    for (int i=0;i<strlen(s);i++) {
        if (s[i]=='3') {
            s[i]='e';
        }
    } printf("%s",s);
    return 0;
}