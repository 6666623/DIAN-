#include <stdio.h>

int max(int a, int b);

int main() {
	int max(int a, int b) {
		if (a < b) {
			return b;
		} else {
			return a;
		}
	}

	int A, B, C;
	int time;
	const int number = 0;
	scanf("%d,%d,%d", &A, &B, &C);
	printf("%d %d %d\n", C, number, number);

	time = max(A - C, C - A);
	printf("%d %d 1\n", A, time);
	printf("%d %d 0\n", B, time + max(A - B, B - A));


	return 0;
}
