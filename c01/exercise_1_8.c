#include <stdio.h>

/* 编写一个统计空格, 制表符和换行符的程序 */

int main()
{
	int nl, nt, ns;
	nl = nt = ns = 0;
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			ns++;
		} else if (c == '\t') {
			nt++;
		} else if (c == '\n') {
			nl++;
		}
	}


	printf("nl:%d, nt:%d, ns:%d\n", nl, nt, ns);

	return 0;
}
