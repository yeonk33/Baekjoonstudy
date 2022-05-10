#include<stdio.h>
int main() {
	int a, b;
	scanf_s("%d\n%d", &a, &b);
	int n1 = a * (b % 10);
	int n2 = a * ((b / 10) % 10);
	int n3 = a * (b / 100);
	printf("%d\n", n1);
	printf("%d\n", n2);
	printf("%d\n", n3);
	printf("%d\n", n1 + n2 * 10 + n3 * 100);
}