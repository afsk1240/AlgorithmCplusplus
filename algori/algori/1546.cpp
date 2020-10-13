#include <stdio.h>
#include <algorithm>

using namespace std;


int main() {
	int a, M;
	double total;
	M = -99999;
	scanf("%d", &a);
	int arr[1000] ;
	for (int i = 0; i < a; ++i) {
		scanf("%d", &arr[i]);
		if (M < arr[i]) M = arr[i];
	}

	for (int i = 0; i < a; ++i) {
		double result = (double)arr[i] / M * 100;
		total += result;
	}

	printf("%.1f", total / a);

}