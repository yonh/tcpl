#include <stdio.h>

int main()
{
	/* count characters in input; 1st version */
	long nc = 0;
	while (getchar() != EOF) {
		nc++;
		printf("%ld\n", nc);
	}
	return 0;
}
