#include <stdio.h>
// c����
/*
void swap(int* x, int* y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
*/
//c++����
void swap(int &x, int &y) {
	int tmp = x;
	x = y;
	y = tmp;
}
int main() {
	int a, b;
	
	scanf("%d%d", &a, &b);

	// c����
	//swap(&a, &b);
	swap(a, b);

	printf("a = %d , b=%d\n ",a, b);

}