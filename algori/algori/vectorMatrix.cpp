#include <iostream>
#include <vector>

using namespace std;

int main() {
	//vector<int>�� �ڷ������� ������ ���͸� ����
	// ���� �ٱ� �ʿ� �ִ� ���ʹ� ũ��2, �׸��� ���� ��Ҵ� ũ�Ⱑ 3�� vector<int>�� �ʱ�ȭ
	vector <vector<int>> v(2, vector<int>(3));
	//�Է�
	for (vector<int>& row : v) {
		for (int& elem : row) cin >> elem;
	}
	// ���
	for (vector<int>& row : v) {
		for (int& elem : row) {
			cout << elem << '\t';
		}
		cout << endl;
	}
}