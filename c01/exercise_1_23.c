#include <stdio.h>

int remove_comments(char line[]);

/* 实现删除注释代码*/
int main()
{
	char text[] = "hello world";
	remove_comments(text);

	char text2[]="hello world//hello";
	remove_comments(text2);
	
	char text3[]="\"hello world//hello\"//comments";
	remove_comments(text3);
	
	char text4[]="\"hel/*llo w*/orld//hello\"//comments";
	remove_comments(text4);
	
	char text5[]="\"hel/*llo w*/orld//hello\" /*comments */ w/*ww sdf*/w";
	remove_comments(text5);

	char text6[]="\"/*hel/*llo w*/orld//hello\" /*comments */ wwww";
	remove_comments(text6);

	char text7[]="/**/h/*sdfsd*/el/*sdfsdfsdf*/l/*sdlfjsdkf/*/o";
	remove_comments(text7);
	
	char text8[]="\"hello//,world\\\"//hello'\"";
	remove_comments(text8);
	

	return 0;
}

int remove_comments(char text[])
{
	int is_str = 0;
	int is_mul_comments = 0;
	int i = 0;
	char c;
	char d;

	while ((c = text[i]) != '\0') {
		
		//双引号
		if (c == '"') {
			is_str = is_str==0?1:0;
			putchar(c);
		} else if (c == '\\' && is_str == 1) {
			i++;
			putchar(c);
			putchar(text[i]);
		// 双斜杠
		} else if (c == '/' && text[i+1] == '/' && is_str == 0) {
			i++;
			while ((c = text[i]) != '\0') {
				if (c !='\n') {
					i++;
				} else {
					putchar(c);
					break;
				}
			}
		// 多行注释
		} else  if (c=='/' && text[i+1] == '*' && is_str==0){
			i++;
			while ((c = text[i])!='\0') {
				i++;
				if (c=='*' && text[i]=='/') {
					break;
				}
			}
		} else {
			putchar(c);
		}

		i++;
	}
	printf("\n");
	return 0;	
}
