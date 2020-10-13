#include <iostream>

using namespace std;

int main() {
	int ary[3] = { 1,2,3 };
	cout << ary << endl;
	cout << endl;
	cout << ary[0] << endl;
	cout << ary + 0 << endl;
	cout << *(ary + 0) << endl;
	cout << endl;
	cout << ary[1] << endl;
	cout << ary + 1 << endl;
	cout << *(ary + 1) << endl;
	cout << endl;
	cout << ary[2] << endl;
	cout << ary + 2 << endl;
	cout << *(ary + 2) << endl;

	return 0;
}
