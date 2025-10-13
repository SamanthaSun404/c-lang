#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int c = a / b;
    int d = a % b;
    printf("%d %d", c, d);
    return 0;
}
//给定两个整数 a 和 b，请计算 a除以b的整数商和余数。