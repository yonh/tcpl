#include <stdio.h>

/*	编写entab程序，将空格替换为最少的制表符和空格
	就是将连续的空格替换为tab,不足组成一个tab长度的空格原样输出
*/

#define TABINC 8

int main()
{
	int c, nb, nt, pos;
	nb = nt = 0;
	for (pos = 1; (c = getchar()) != EOF; pos++) {
		if (c == ' ') {
			if (pos % TABINC != 0) {
				nb++;
			} else {
				nb = 0;
				nt++;
			}
		} else {
			while(nt>0) {
				putchar('\t');
				nt--;
			}
			if (c == '\t') {
				nb = 0;
			} else {
				while (nb>0) {
					putchar(' ');
					nb--;
				}
			}
			putchar(c);
			if (c == '\n') {
				pos = 0;
			} else if (c == '\t') {
				pos = pos + (TABINC - (pos -1) % TABINC) - 1;
			}
		}
	}
	return 0;
}
