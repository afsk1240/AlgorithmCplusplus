#include <iostream>

using namespace std;

int main() {
	int size;
	cout << "Size : ";
	cin >> size;
	int *dyary;
	dyary = new int[size]; //���� �迭 ����

	// �Է¹ޱ�
	for (int i = 0; i < size; ++i) cin >> dyary[i];
	//����ϱ�
	int* curr = 0;
	int* begin, * end;
	begin = dyary;
	end = dyary + size;
	curr = begin;
	while (curr != end) {
		cout << *(curr) << "\t";
		curr++;
	}

	cout << endl;
	// �迭 �����ϱ�
	delete[] dyary;
	return 0;
}