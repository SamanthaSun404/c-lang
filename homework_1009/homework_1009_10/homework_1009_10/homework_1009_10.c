#define _CRT_SECURE_NO_WARNINGS 1

#include  <stdio.h>
int main()
{
	int a = 0;
	scanf("%d", &a );
	if (a>= 140)
		printf("Genius");
	return 0;
}
//据说智商140以上者称为天才，KiKi想知道他自己是不是天才，请帮他编程判断。输入一个整数表示一个人的智商，如果大于等于140，则表明他是一个天才，输出“Genius”。