#include <stdio.h>

/* write a program that prints its input one word per line */
int main()
{
	char c;
	int isword;
	isword = 0;

	while ((c = getchar()) != EOF) {
		if ( (c >= 'a' && c<= 'z') || (c >= 'A' && c <= 'Z')) {
			putchar(c);
			isword = 1;
		} else if (isword==1) {
			isword = 0;
			putchar('\n');
		}
	}

	return 0;
}
