#include<stdio.h>
#define MAXVALUE 1000

int ReadArray(char masiv[], int maxline);
void Squeeze(char masive1[],char masive2[]);

int main(void) {
	char line1[MAXVALUE];
	char line2[MAXVALUE];

	ReadArray(line1,MAXVALUE);
	ReadArray(line2,MAXVALUE);

	Squeeze(line1, line2);

	printf("%s", line1);

	return 0;
}

int ReadArray(char s[], int lim) {
	int i, c;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n';i++) {
		s[i] = c;
		if (c == '\n') {
			s[i] = c;
			i++;
		}	
		s[i] = '\0';
	}
	return i;
}
void Squeeze(char s1[], char s2[]) {
	int i, j;
	int k;
	for (k = 0; s2[j] != '\0'; k++)
		for (i = j = 0; s1[i] != '\0'; i++)
			if (s1[i] != s2[k])
				s1[j++] = s1[i];
	    s1[j] = '\0';
}
