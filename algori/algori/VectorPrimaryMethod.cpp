#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v{ 10,20,30,40 };
	int index_value = 2;
	// �� �� ���� �о�´�.
	int front = v.front() ;
	// �� �� ���� �о�´�.
	int back = v.back();
	// �� �ڿ� ���� ���� �ִ´�.
	v.push_back(50);
	// �� �ڿ� ���� �о���� �����.
	v.pop_back();
	// v[index_value]�� �����ϴ�. ������ �޼ҵ带 ����ϴ� ���� ���鼭 ����� ������ �����ϴµ� �����ϴ�.
	int at = v.at(index_value);
	// ������ ũ�⸦ �����´�. �Լ��� ��ȯ���� unsigned int �̹Ƿ� �� ���� ���µ� �־ unsigned int�� �޾��־�� �Ѵ�.
	unsigned int size = v.size();
	return 0;
}
