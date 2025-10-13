#define _CRT_SECURE_NO_WARNINGS 1//remember to 在新建的时候显示更多选项 不要用小窗口
#include <stdio.h>
int main()
{
	printf("the number is %.2f\n" , 123.456 );
	printf("the number is %.9f\n", 123.456);
	printf("%.6s\n" , "hello world");//so, "space" is counted
	printf("%6d\n", 100);
	return 0;
}//okay so much for today