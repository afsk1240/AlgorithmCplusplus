#include <iostream>

using namespace std;

int sum(int* begin, int* end) { // 인자로 넘긴 값이 주소이기 떄문에 포인터 변수로 받아준다.
	int result = 0;
	for (int* i = begin; i < end; i++) { // 포인터 변수의 시작점부터 루프를 돌려야 하므로
		// i도 포인터 변수로 잡아준다.
		result += *i;
	}
	return result;
}

int main() {
	int ary[] = { 1,2,3,4,5 };
	int* begin, * end; // int 자료형의 주소를 받는 포인터변수 두개 선언
	begin = ary; //배열의 시작주소를 포인터 변수 begin 에 받는다.
	end = ary + 5; // 배열의 끝주소를 end에 받는다.
	cout << sum(begin, end) << endl;
	return 0;
}