#include<stdio.h>
int main() {
	int m = 0, a, r;
	for (int i = 1; i <= 9; i++) {
		scanf("%d", &a);
		if (a > m)m = a, r = i;
	}
	printf("%d\n%d", m, r);
	return 0;
}