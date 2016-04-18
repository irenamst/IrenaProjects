#include<stdio.h>

int main() {
	int x=0xC4;
	x = x&(~(1 << 2));
	printf("%02x", x);
	getchar();
	return 0;
}