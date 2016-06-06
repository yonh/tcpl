#include <stdio.h>

/* count digits, white space, others */
int main()
{
	int c, i;
	int ndigit[10];
	int isword;
	int length;
	isword = 0;
	length = 0;

	for (i=0; i<10; i++) {
		ndigit[i] = 0;
	}

	while((c = getchar()) != EOF) {
		if (c==' ' || c=='\t' || c=='\n') {
			if (isword == 1 && length > 0) {
				ndigit[length-1]++;
			}
			isword = 0;
			length = 0;
		} else if (isword==0) {
			length = 1;
			isword = 1;
		} else {
			length++;
		}
	}



	for (i=0; i<10; i++) {
		printf("%02d ", i+1);
		while (ndigit[i] > 0) {
			printf("* ");
			ndigit[i]--;
		}
		printf("\n");
	}

	return 0;
}
