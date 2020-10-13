#include <iostream>

using namespace std;

int sum(int* begin, int* end) {
	int* curr;
	curr = begin;
	int result = 0;
	while (curr != end) {
		result += *(curr);
		curr++;
	}
	return result;
}

int main() {
	int ary[] = { 1,2,3,4,5 };
	int* begin, * end;
	begin = ary;
	end = ary + 5;
	cout << sum(begin, end) << endl;
	return 0;
}