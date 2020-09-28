#include <stdio.h> 
int main() {

	int arr[2][3] = { {1,2,3},{4,5,6} };
	// arr =  &arr[0]
	//*row = &(*row)[0]
	for (int(*row)[3] = arr; row < arr + 2; row++) {
		//printf("%d ", *row);
		for (int *col = *row; col < *row + 3; col++) {
			printf("%d ", &(*row)[*col]);
			//printf("%d", *col);
		}
	}


}