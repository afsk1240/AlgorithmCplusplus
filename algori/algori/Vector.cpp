#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> vec_a; //�̸��� ������
	vector<int> vec_b(10); //���� ũ�� 10���� ������
	vector<int> vec_c(10, 8); //����ũ��10, �ʱ�ȭ 8�� ������
	vector<int> vec_d{ 10,20,30,40 };//4�� ��ҷ� ���͸� ����
	return 0;
}
