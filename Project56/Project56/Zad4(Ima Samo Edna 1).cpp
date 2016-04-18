#include<stdio.h>

int checkOneBitSet(int i);
int countOnes(int x);

int main() {
	int x = 0b0100;
	int i;
	i = countOnes((int)x);
	printf("%d", checkOneBitSet(i));

	getchar();
	return 0;
}

int checkOneBitSet(int i) {
	if (i==1)
		return 1; 
	else
		return 0;
}

int countOnes(int x) {
	int i;
	for (i = 0; x != 0; x &= (x - 1))
		i++;
	return i;
}