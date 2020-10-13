#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v{ 10,20,30,40 };
	int index_value = 2;
	// 맨 앞 값을 읽어온다.
	int front = v.front() ;
	// 맨 뒤 값을 읽어온다.
	int back = v.back();
	// 맨 뒤에 값을 집어 넣는다.
	v.push_back(50);
	// 맨 뒤에 값을 읽어오고 지운다.
	v.pop_back();
	// v[index_value]와 동일하다. 하지만 메소드를 사용하는 것이 쓰면서 생기는 오류를 방지하는데 유용하다.
	int at = v.at(index_value);
	// 벡터의 크기를 가져온다. 함수의 반환값이 unsigned int 이므로 이 값을 쓰는데 있어서 unsigned int로 받아주어야 한다.
	unsigned int size = v.size();
	return 0;
}
