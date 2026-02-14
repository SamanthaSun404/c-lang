#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int count = 0;

	for (int i = 1; i <= 100; i++) {
		int temp = i;

		while (temp > 0) {

			if (temp % 10 == 9) {
				count++;
			}

			temp /= 10; //temp/=10 == temp=temp/10
		}
	}
	printf("%d",count);
	return 0;
}
//数一下1到100的所有整数中出现多少个数字9