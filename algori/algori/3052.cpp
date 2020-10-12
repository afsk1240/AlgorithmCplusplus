#include <stdio.h>

int main() {
	int arr[10];
	int test[43] = { 0, };
	int cnt=0 ;
	for (int i = 0; i < 10; ++i) {
		scanf("%d", &arr[i]);
	}
	
	for (int i = 0; i < 10; ++i) {
		int tmp = arr[i] % 42;
		test[ arr[i] % 42]++;
	}

	
	for (int i = 0; i < 43; ++i) {
		if (test[i] > 0) cnt++;
	}
	printf("%d", cnt);
}