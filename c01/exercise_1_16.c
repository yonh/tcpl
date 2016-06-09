#include <stdio.h>
/* 看不懂题目意思, 看了几次，大概猜测意思是打印当前行的长度，并输出getline获取的值*/
#define MAXLINE 10

int getline2(char s[], int limit); 
void copy(char to[], char from[]);

int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = getline2(line, MAXLINE)) > 0) {
		printf("%d: %s\n", len, line);
		if (len>max) {
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0) {
		printf("%s", longest);
	}
	return 0;
}

int getline2(char s[], int limit)
{
	int c, i, j; // i返回行字符长度, j保存当前字符索引
	j = 0;
	for (i=0; (c=getchar())!=EOF && c!='\n'; i++) {
		if (i<limit-1) {
			s[j] = c;
			j++;
		}
	}
	if (c == '\n') {
		s[j] = c;
		i++;
	}

	s[j] = '\0';
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
