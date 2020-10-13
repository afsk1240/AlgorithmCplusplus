#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> vec_a; //이름만 선언함
	vector<int> vec_b(10); //최초 크기 10으로 선언함
	vector<int> vec_c(10, 8); //최초크기10, 초기화 8로 선언함
	vector<int> vec_d{ 10,20,30,40 };//4개 요소로 벡터를 만듬
	return 0;
}
