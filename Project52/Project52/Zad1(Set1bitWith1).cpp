#include<stdio.h>
//int setBit(int x, unsigned char p);

int main() {
	unsigned int x;
	unsigned int p;
	int x1;
	scanf_s("%02x\n",&x);
	scanf_s("%d\n", &p);
	x1 = x | (1<<p);
	printf("%02x", x1);
	getchar();
	return 0;
}

/*
int setBit(int x, unsigned char p) {
	return x;
	}
*/