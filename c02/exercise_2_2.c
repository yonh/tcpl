#include <stdio.h>

/* write a loop equivalent to the for loop above without using && or ||. */
int main(void)
{
	int lim = 10;
	int i = 0;
	char c = '\0';
	char s[lim];

	while (i<lim) {
		c = getchar();
		if (c == '\n') break;
		if (c == EOF) break;

		s[i] = c;
		i++;
	}
	s[i] = '\0';

	printf("%s\n", s);

	return 0;
}
