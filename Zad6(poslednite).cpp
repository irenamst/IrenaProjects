#include<stdio.h>

int main() {
	int x, y;
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	x = x + y;
	y = x - y;
	x = x - y;
	printf("%d %d", x, y);
	getchar();
	return 0;
}