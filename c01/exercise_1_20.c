#include <stdio.h>

/* 编写detab函数，实现将tab转换为空格 */

#define MAXLINE 1000

int getline2(char s[], int limit); 
int remove_blank(char s[]);
void detab(char s[], int tablen);

int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = getline2(line, MAXLINE)) > 0) {
		if ((len = remove_blank(line)) > 0) {
			detab(line, 4);
			printf("%s", line);
		}
	}
	return 0;
}

int getline2(char s[], int limit)
{
	int c, i;
	for (i=0; i<limit-1 && (c=getchar())!=EOF && c!='\n'; i++) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		i++;
	}

	s[i] = '\0';
	return i;
}

int remove_blank(char s[])
{
	int i = 0; //统计整行字符个数
	int end_index = 0;
	while (s[i] != '\0') {
		i++;
	}
	end_index = i - 1;
	for (end_index=i-2; end_index>=0; end_index--) {
		if (s[end_index] != '\t' && s[end_index] != ' ') {
			break;
		}
	}

	//大于等于0表示至少第一个字符不是空格或制表符,那么删除其后的空白符的实现就是使用\n\0 覆盖在结束字符后
	if (end_index>=0) {
		s[end_index+1] = '\n';
		s[end_index+2] = '\0';
	}

	return end_index+1; // 整行是空白符的时候返回0, 其他情况返回整行除\n\0外字符的个数
}

/* 颠倒字符串顺序 */
void detab(char s[], int tablen) {
	int len = 0;
	int i = 0;
	int j = 0;
	int tab = 0; //一行中tab的数量

	while (s[len]!='\n' && s[len]!='\0') {
		if (s[len] == '\t') {
			tab++;
		}
		len++;
	}
	
	char temp[len + (tablen-1) * tab]; // temp用于临时保存更新后的字符数组
	int temp_index = 0;
	for (i=0; i<len; i++) {
		if (s[i] == '\t') { // tab替换为空格
			for (j=0; j<tablen; j++) {
				temp[temp_index] = ' ';
				temp_index++;
			}
		} else { // 普通字符
			temp[temp_index] = s[i];
			temp_index++;
		}
	}

	for (i=0; i<temp_index; i++) {
		s[i] = temp[i];
	}
	s[temp_index] = '\n';
	s[temp_index+1] = '\0';
}
