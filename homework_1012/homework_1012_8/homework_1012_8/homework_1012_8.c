#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {

	float result = 0;
	float i = 0;

	for (i = 1; i < 100; i = i + 2) {

		result = result + 1 / i;
	}

	for (i = 2; i < 101; i = i + 2) {

		result = result - 1 / i;
	}

	printf("%f", result);

	return 0;
}

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果