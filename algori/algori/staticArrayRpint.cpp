#include <iostream>

using namespace std;

void print(const int* ary, int length) {
	for (int i = 0; i < length; ++i) {
		cout << *(ary + i) << "\t";
	}
}

int main() {
	int ary[] = { 1,2,3,4,5 };
	print(ary, 5);
	return 0;
	
}