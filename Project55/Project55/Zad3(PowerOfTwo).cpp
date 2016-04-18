#include<stdio.h>

int isPowerOfTwo(int x);

int main() {
	int x = 0b0011;
	int i;
	i = count_ones((int)x);
	printf("%d", isPowerOfTwo((int)i));
	getchar();
	return 0;
}

int isPowerOfTwo(int i) {
	if (i==1)
		return 1;
	else
		return 0;
}

int count_ones(int x) {
	int i;
	for (i = 0; x != 0; x &= (x - 1))
		i++;
	return i;
}
