#include <stdio.h>

int main() {
	int arr[3] = { 1,2,3 };

	int (*ptr_arr)[3]; // ���� 3�� int �� �迭�� ����Ű�� �����͸� ����

	ptr_arr = &arr;
	for (int i = 0; i < 3; ++i) {
		printf("%d  ", (*ptr_arr)[i]);
	}

	printf("\n");
	for (int i = 0; i < 3; ++i) {
		printf("%d  ", *(arr+i));
	}
}