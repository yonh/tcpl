#include <stdio.h>

/**
 * P12
 * 华氏摄氏度转换程序
 */
int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	printf("%4s %7s\n", "fahr", "celsius");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%4.0f %7.2f\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}
