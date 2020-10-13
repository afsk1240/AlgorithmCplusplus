#include <iostream> 

using namespace std;

int main() {
	double dMatrix[2][3] = { {1,2,3},{4,5,6} };
	//또는 이렇게 선언해도된다.
	//dMatrix[0][0] = 1;
	//dMatrix[0][1] = 2;
	//dMatrix[0][2] = 3;
	//dMatrix[1][0] = 4;
	//dMatrix[1][1] = 5;
	//dMatrix[1][2] = 6;

	for (int row = 0; row <2; row++) {
		cout << dMatrix << endl;
		cout << dMatrix + row << endl;
		cout << *(dMatrix + row) << endl;
		for (int col = 0; col < 3; ++col) {
			cout << *(dMatrix + row)+col << endl;
			cout << *(*(dMatrix + row)+ col) << endl;

			//cout << dMatrix[row][col] << "\t";
		}
		cout << endl;
	}
	return 0;
}