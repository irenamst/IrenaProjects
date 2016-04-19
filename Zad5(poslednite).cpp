#include<stdio.h>
int check_Parity(int x);
int bitcount(int x);
int main() {
	int x;
	scanf_s("%x", &x);
	printf("%d", check_Parity(x));
	getchar();
	return 0;
}
int check_Parity(int x) {
	unsigned int b;
	b = bitcount(x);
	if (b & 1)
		return 1;
	else
		return 0;
}
int bitcount(int x) {
	int b; for (b = 0; x != 0; x &= (x - 1))
		b++;
	return b;
}