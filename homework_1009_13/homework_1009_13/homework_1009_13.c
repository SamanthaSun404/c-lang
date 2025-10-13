#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {
	int a = 0;
	while (scanf("%d",&a) != EOF) {
		int i = 0;
		for (i = 0; i < a; i++)
			printf("*");
		printf("\n");
	}
	return 0;
}
//多组输入，一个整数（1~100），表示线段长度，即“*”的数量。针对每行输入，输出占一行，用“*”组成的对应长度的线段。