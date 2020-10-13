#include <iostream>
#include <vector>

using namespace std;

int main() {
	//vector<int>를 자료형으로 가지는 벡터를 선언
	// 가장 바깥 쪽에 있는 벡터는 크기2, 그리고 안의 요소는 크기가 3인 vector<int>로 초기화
	vector <vector<int>> v(2, vector<int>(3));
	//입력
	for (vector<int>& row : v) {
		for (int& elem : row) cin >> elem;
	}
	// 출력
	for (vector<int>& row : v) {
		for (int& elem : row) {
			cout << elem << '\t';
		}
		cout << endl;
	}
}