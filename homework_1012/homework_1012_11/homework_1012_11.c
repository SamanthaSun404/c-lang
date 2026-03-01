#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	//approach 1: Brute Force

	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int min = (a <= b) ? a : b;

	for (int i = min; i >= 1; i--) {
		if ((a % i == 0) && (b % i == 0)) {
			printf("approach1 greatest common divisor is: %d\n", i);
			break;
		}
	}

	//approach2:Euclidean Algorithm


	int tempA = a;
	int tempB = b;
	int z = 0;

	while (tempB != 0) {
		z = tempA % tempB;
		tempA = tempB;
		tempB = z;
	}

	printf("approach2 greatest common divisor is: %d\n", tempA);
	return 0;
}
//greatest common divisor