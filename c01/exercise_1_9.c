#include <stdio.h>

/*  编写一个将输入复制到输出的程序,并将其中的多个空格用一个空格替换 */

int main()
{
	int sflag;
	sflag = 0;
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (sflag == 0) {
				putchar(c);
			}
			sflag = 1;
		} else {
			putchar(c);
			sflag = 0;
		}
	}

	return 0;
}
