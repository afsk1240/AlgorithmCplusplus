#include<cstdio>
int a[42], x, r;
int main() {
	while (~scanf("%d", &x)) r += !a[x % 42]++;
	printf("%d", r);
	return 0;
}