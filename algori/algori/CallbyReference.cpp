#include <stdio.h>
// c문법
/*
void swap(int* x, int* y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
*/
//c++문법
void swap(int &x, int &y) {
	int tmp = x;
	x = y;
	y = tmp;
}
int main() {
	int a, b;
	
	scanf("%d%d", &a, &b);

	// c문법
	//swap(&a, &b);
	swap(a, b);

	printf("a = %d , b=%d\n ",a, b);

}