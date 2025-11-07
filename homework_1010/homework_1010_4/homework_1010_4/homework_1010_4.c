#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {

	int a = 0;
	int b = 0;
	int c = 0;
	int temp = 0;

	scanf("%d %d %d", &a, &b, &c);

	if (a < b) {
		temp = a;
		a = b;
		b = temp;
	}

	if (a < c) {
		temp = c;
		c = a;
		a = temp;

	}

	if (b < c) {
		temp = c;
		c = b;
		b = temp;
	}

	printf("%d %d %d", a, b, c);
	
	return 0;
}
//写代码将三个整数数按从大到小输出。例如：输入：2 3 1  输出：3 2 1