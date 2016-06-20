#include <stdio.h>
#include <limits.h>


int main()
{
	printf("Size of Char %d\n", CHAR_BIT);
	printf("Size of Char Max %d\n", CHAR_MAX);
	printf("Size of Char Min %d\n", CHAR_MIN);
	printf("Size of int min %d\n", INT_MIN);
	printf("Size of int max %d\n", INT_MAX);
	printf("Size of long min %ld\n", LONG_MIN);
	printf("Size of long max %ld\n", LONG_MAX);
	printf("Size of short min %d\n", SHRT_MIN);
	printf("Size of short max %d\n", SHRT_MAX);
	printf("Size of unsigned char %d\n", UCHAR_MAX);
	printf("Size of unsigned long %ld\n", ULONG_MAX);
	printf("Size of unsigned int %d\n", UINT_MAX);
	printf("Size of unsigned short %d\n", USHRT_MAX);

	return 0;
}
