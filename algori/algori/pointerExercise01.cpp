#include <stdio.h>	

int main() {
	int arr[3][3] = { 0 };

	printf("%d\n",&arr);  // �迭 ��ü �ּ�
	printf("%d\n", arr);  // &arr[0] �迭 a[0]�� �ּ�
	printf("%d\n", *arr);  // �迭 a[0]�� �����ּ��� ���̹Ƿ� a[0][0]�� �ּ�?
	printf("%d\n", &arr[0]); // �迭 a[0]�� �ּҰ� 
	printf("%d\n", arr[0]);  //&arr[0][0]�� �ּҰ�
	printf("%d\n", *arr[0]);  //&arr[0][0]�� �ּҰ��� ����Ű�� ���� ��
	printf("%d\n", &arr[0][0]); //&arr[0][0]�� �ּҰ�
	printf("%d\n", arr[0][0]); //arr[0][0]�� ��

}