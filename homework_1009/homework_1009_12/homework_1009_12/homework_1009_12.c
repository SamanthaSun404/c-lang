#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {
	int M = 0;
	scanf("%d",&M);
	if (0==M%5)
		printf("YES");
	else
		printf("NO");
	return 0;
}
//输入包括一个整数M（1≤M≤100,000）,输出包括一行，如果M可以被5整除就输出YES，否则输出NO（结果大小写敏感）。