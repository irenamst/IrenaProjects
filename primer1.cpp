#include<stdio.h>
#define MAXVALUE 1000

int ReadArray(char masiv[], int maxline);
void squeeze(char masiv[], int c);

int main(void) {
	int c = 'c';
	char sline[MAXVALUE];

	ReadArray(sline, MAXVALUE);

	squeeze(sline, c);
	printf("%s", sline);

	return 0;
}

int ReadArray(char s[], int lim) {
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void squeeze(char s[], int c) {
	int i, j;
	for (i = j = 0; s[i] != '\0'; i++)
		if (s[i] != c) {
			s[j] = s[i];
			j++;
		}
	s[j] = '\0';
}