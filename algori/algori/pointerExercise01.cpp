#include <stdio.h>	

int main() {
	int arr[3][3] = { 0 };

	printf("%d\n",&arr);  // 배열 전체 주소
	printf("%d\n", arr);  // &arr[0] 배열 a[0]의 주소
	printf("%d\n", *arr);  // 배열 a[0]의 시작주소의 값이므로 a[0][0]의 주소?
	printf("%d\n", &arr[0]); // 배열 a[0]의 주소값 
	printf("%d\n", arr[0]);  //&arr[0][0]의 주소값
	printf("%d\n", *arr[0]);  //&arr[0][0]의 주소값이 가리키는 변수 값
	printf("%d\n", &arr[0][0]); //&arr[0][0]의 주소값
	printf("%d\n", arr[0][0]); //arr[0][0]의 값

}