#include <iostream>

using namespace std;

template <typename T>
T MyFunc (T a, T b) {
	return a+b;
}

int main() {
	cout << MyFunc(1,3) << endl;
	cout << MyFunc(1.3,3.2) << endl;
	system("pause");
}
