#include <stdio.h>

/* 打印字符大于80的行*/

#define MAXLINE 1000

int getline2(char s[], int limit); 
void copy(char to[], char from[]);

int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 80;
	while ((len = getline2(line, MAXLINE)) > 0) {
		if (len>max) {
			copy(longest, line);
			printf("%s", longest);
		}
	}
	return 0;
}

int getline2(char s[], int limit)
{
	int c, i;
	for (i=0; i<limit-1 && (c=getchar())!=EOF && c!='\n'; i++) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		i++;
	}

	s[i] = '\0';
	return i;
}

void copy(char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0') {
		i++;
	}
}
