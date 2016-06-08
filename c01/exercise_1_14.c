#include <stdio.h>
#include <ctype.h>

/* count digits, white space, others */
int main()
{
	int max_char;
	int	char_count[128];
	int i;
	int length;

	length = 0;
	max_char = 128;

	for (i=0; i<max_char; i++) {
		char_count[i] = 0;
	}

	while((c = getchar()) != EOF) {
		if (c <= max_char) {
			char_count[c]++;
		}
	}

	for (i=0; i<max_char; i++) {
		if (isprint(i)) { // 判断字符是否可显示
			printf("%c: ", i, char_count[i]);
			length = char_count[i];
			while (length >0) {
				printf("*");
				length--;
			}
			printf("\n");
		}
	}

	return 0;
}
