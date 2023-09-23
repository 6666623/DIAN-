#include <stdio.h>

int max(int a, int b);

int main(int argc, char const *argv[]) {
	FILE *fp = fopen("level1-1.in", "r");
	if (fp) {
		int A, B, C;
		int time;
		const int number = 0;
		scanf("%d,%d,%d", &A, &B, &C);
		printf("%d %d %d\n", C, number, number);

		time = max(A - C, C - A);
		printf("%d %d 1\n", A, time);
		printf("%d %d 0\n", B, time + max(A - B, B - A));

		int max(int a, int b) {
			if (a < b) {
				return b;
			} else {
				return a;
			}
		}
	} else {
		printf("无法打开文件\n");
	}
	return 0;
}