#include <stdio.h>

int number = 8;
int sorted[8]; // ���� �迭�� �ݵ�� ���� ������ ����

void merge(int a[],int m,int middle, int n) {
	int i = m;
	int j = middle +1;
	int k = m;
	// ���� ������� �迭�� ����
	
	while(i <= middle && j <=n)  {
		if(a[i] <= a[j]) {
			sorted[k++] = a[i++];
		} else {
			sorted[k++] = a[j++];
		}
	}
	
//	���������͵� ���� 
	if( i > middle) {
		for(int t = j ; t<=n ; t++) {
			sorted[k++] = a[t];
		}
	}else {
		for(int t = i; t <=middle;t++) {
			sorted[k++] = a[t];
		}
	}
	
	// ���ĵ� �迭�� ����
	for(int t = m; t <=n ; ++t)  {
		a[t] = sorted[t];
	}
}

void mergeSOrt(int a[], int m,int n) {
	// ũ�Ⱑ 1���� ū���
	if(m < n)  {
		int middle = (m+n)/2;
		mergeSOrt(a,m,middle);
		mergeSOrt(a,middle+1,n);
		merge(a,m,middle,n);
	}
}


int main(void) {
	int array[number] = {7,6,5,8,3,5,9,1};
	mergeSOrt(array,0,number-1);
	for(int i= 0; i < number; ++i) {
		printf("%d ,",array[i]);
	}
}



