#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int c, n;
int* arr;

int main() {
	scanf("%d", &c);
	double* result = new double[c];
	for (int i = 0 ; i <c ; ++i) {
		scanf("%d", &n);
		int* arr = new int[n];
		int total=0;
		for (int j = 0; j < n; ++j) {
			scanf("%d", arr+j);
			total += arr[j];
		}
		double avg = (double)total / n;
		int cnt = 0;
		for (int j = 0; j < n; ++j) {
			if (arr[j] > avg) {
				cnt++;
			}
		}
		delete[] arr;
		result[i] = ((double)cnt / n) * 100;
		cnt = 0;
	}
	for (int i = 0; i < c; ++i) {
		printf("%.3f%%\n", result[i]);
	}
	delete[] result;
}
