#include <stdio.h>

/* count digits, white space, others */
int main()
{
	int c, i, j;
	int ndigit[10];
	int isword;
	int length;
	int max;
	isword = 0;
	length = 0;
	max = 0;

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
		if (ndigit[i]>max) {
			max = ndigit[i];
		}
	}

	printf("\n");
	for (i=max; i>0; i--) {
		for (j=0; j<10; j++) {
			if (ndigit[j] >= i) {
				printf("** ");
			} else {
				printf("   ");
			}
		}
		printf("\n");
	}

	for (i=1; i<11; i++) {
		printf("%02d ", i);
	}
	
	return 0;
}
