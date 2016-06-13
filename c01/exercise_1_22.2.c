#include <stdio.h>

#define MAXCOL 10		// maximum column of input
#define TABINC 8		// tab increment size

char line[MAXCOL];		// input line

int exptab(int pos);
int findblnk(int pos);
int newpos(int pos);
void printl(int pos);

/* 编写程序将特定长度的行折断成多行,参考书版本*/
int main()
{
	int c, pos;
	pos = 0;

	while ((c = getchar()) != EOF) {
		line[pos] = c;

		if (c == '\t') {
			pos = exptab(pos);
		} else if (c == '\n') {
			printl(pos);
			pos = 0;
		} else {
			pos++;
			if (pos >= MAXCOL) {
				pos = findblnk(pos);
				printl(pos);
				pos = newpos(pos);
			}
		}
	}
	return 0;
}

void printl(int pos)
{
	int i;
	for (i=0; i<pos; i++) {
		putchar(line[i]);
	}
	if (pos>0) {
		putchar('\n');
	}
}

int exptab(int pos)
{
	line[pos] = ' ';
	
	for (pos++; pos<MAXCOL && pos%TABINC!=0; pos++) {
		line[pos] = ' ';
	}
	if (pos < MAXCOL) {
		return pos;
	} else {
		printl(pos);
		return 0;
	}
}

int findblnk(int pos)
{
	while (pos>0 && line[pos]!= ' ') {
		pos--;
	}
	if (pos == 0) {
		return MAXCOL;
	} else {
		return pos+1;
	}
}

int newpos(int pos)
{
	int i, j;

	if (pos <=0 || pos>=MAXCOL) {
		return 0;
	} else {
		i = 0;
		for (j=pos; j<MAXCOL; j++) {
			line[i] = line[j];
			i++;
		}
		return i;
	}
}
