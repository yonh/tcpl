#include <stdio.h>

// write a program to determine the ranges of char, short, int and long variables, both signed and unsigned,
// by printing appropriate values from standard headers and by direct computation. Harder if you compute them: determine the ranges of the various floating-point types.

void print_bin(int n);
void print_bin_int(int val, int len);
void printbin(unsigned long x, int n);

int main()
{
	print_bin_int((unsigned char)~0>>1, 8);
	print_bin_int(~(unsigned char)~0>>1, 8);

	//我要得到最大值的做法就是,得到一个01111111,这个就是正数的最大值
	printf("Signed char max: %d\n", (unsigned char) ~0 >> 1);
	//我要得到最小值的做法就是,得到一个10000000,这个就是负数的最小值
	printf("Signed char min: %d\n", ~((unsigned char) ~0 >> 1));

	printf("Signed int max: %d\n", (unsigned int) ~0 >> 1);
	printf("Signed int min: %d\n", ~((unsigned int) ~0 >> 1));

	printf("Signed short max: %d\n", (unsigned short) ~0 >> 1);
	printf("Signed short min: %d\n", ~((unsigned short) ~0 >> 1));

	printf("Signed long min: %ld\n", (unsigned long) ~0 >> 1);
	printf("Signed long max: %ld\n", ~((unsigned long) ~0 >> 1));

	return 0;
}

/*
	将整数转换为二进制输出
	val: 需要解析的int值
	len: 二进制长度, 分别为8,16,32
*/
void print_bin_int(int val, int len)
{
	unsigned int index; //每次index都仅有1位位1,然后和val进行位与操作判断某位是否＝1

	if (len ==32) {
		index = 0x80000000;
	} else if (len == 16) {
		index = 0x8000;
	} else {
		index = 0x80;
	}


	printf("%d\t%d\t", val, len);

	printbin(val, len);
	
	putchar('\n');
}

/* 打印二进制 */
void printbin(unsigned long x, int n) {
	if (--n) printbin(x>>1, n);
	putchar("01"[x&1]);
}
