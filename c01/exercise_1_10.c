#include <stdio.h>

/* 编写一个输入复制到输出的程序,并替换换行符为\t字符, 回退符为\b字符, 反斜杠为\\字符 */

int main()
{
	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			putchar('\\');
			putchar('t');
		} else if (c == '\\') {
			putchar('\\');
			putchar('\\');
		} else if (c == '\b') {
			putchar('\\');
			putchar('b');
		} else {
			putchar(c);
		}
	}

	return 0;
}
