#include <stdio.h>

/* exercise 1-7. Write a program to print the value of EOF */
int main(void)
{
	// 按下CTRL+D可输入EOF # mac下
    printf("The expression getchar() != EOF : %d\n", getchar() != EOF);

	return 0;
}
