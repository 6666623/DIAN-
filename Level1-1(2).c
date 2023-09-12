#include <stdio.h>


int main() {

	int a, b, c, d;
	scanf("%d,%d,%d", &a, &b, &c);
	printf("%d 0 0\n", c);

	if (a >= c) {
		d = a - c;
	} else {
		d = c - a;
	}
	printf("%d %d 1\n", a, d);

	if (a >= b) {
		d += (a - b);
	} else {
		d += (b - a);
	}
	printf("%d %d 0\n", b, d);


	return 0;
}

