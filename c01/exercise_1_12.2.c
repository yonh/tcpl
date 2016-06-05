#include <stdio.h>

/* write a program that prints its input one word per line */
int main()
{
	char c;
	int isword;
	isword = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (isword==1) {
				isword = 0;
				putchar('\n');
			}
		} else {
			isword = 1;
			putchar(c);
		}
	}

	return 0;
}
