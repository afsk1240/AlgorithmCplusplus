#include <iostream>

using namespace std;

int sum(int* begin, int* end) { // ���ڷ� �ѱ� ���� �ּ��̱� ������ ������ ������ �޾��ش�.
	int result = 0;
	for (int* i = begin; i < end; i++) { // ������ ������ ���������� ������ ������ �ϹǷ�
		// i�� ������ ������ ����ش�.
		result += *i;
	}
	return result;
}

int main() {
	int ary[] = { 1,2,3,4,5 };
	int* begin, * end; // int �ڷ����� �ּҸ� �޴� �����ͺ��� �ΰ� ����
	begin = ary; //�迭�� �����ּҸ� ������ ���� begin �� �޴´�.
	end = ary + 5; // �迭�� ���ּҸ� end�� �޴´�.
	cout << sum(begin, end) << endl;
	return 0;
}