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
	celsius = lower;
	
	printf("%7s %9s\n", "celsius", "fahr");
	while (celsius <= upper) {
		fahr = (1 /  (5.0/9.0) + 32.0/celsius )* celsius;
		fahr  = celsius * (9.0/5.0) + 32.0;
		printf("%7.0f %9.2f\n", celsius, fahr) ;
		celsius = celsius + step;
	}
	return 0;
}
