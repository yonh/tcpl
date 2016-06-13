#include <stdio.h>

#define MAXCOL 10
#define TABSIZE 8

/* 编写程序将特定长度的行折断成多行,我实现版本 */
int main()
{
	char c;
	int col = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			col = 0;
		} else if (c == '\t') {
			col += TABSIZE;
		} else {
			col++;
		}
		putchar(c);

		if (col >= MAXCOL) {
			putchar('\n');
			col = 0;
		}
	}
	return 0;
}
