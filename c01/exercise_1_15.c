#include <stdio.h>

int func_celsius(int fahr);

int main()
{
	int fahr;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		printf("%d\t%d\n", fahr, func_celsius(fahr));
		fahr = fahr + step;
	}
	return 0;
}

int func_celsius(int fahr) {
	int celsius;
	celsius = 5 * (fahr - 32) / 9;
	return celsius;
}
