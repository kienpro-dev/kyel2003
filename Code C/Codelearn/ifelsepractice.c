#include<stdio.h>//maytinhcoban_switchcase

int main() {
	int a, b;
	char c;
	scanf("%d %c %d", &a, &c, &b);
	switch (c) {
		case '+':
		printf("%d",a+b);
		break;
		case '-':
		printf("%d",a-b);
		break;
		case '*':
		printf("%d",a*b);
		break;
		case '/':
		printf("%d",a/b);
		break;
		default:
		printf("Sai ki tu");
        break;
	}
	return 0;
}
