#include <stdio.h>

int n, a, b, i;

main() {
	for (; i < 9; i++) scanf_s("%d", &n), a < n ? (a = n, b = i + 1) : 0;
	printf("%d %d", a, b);
}