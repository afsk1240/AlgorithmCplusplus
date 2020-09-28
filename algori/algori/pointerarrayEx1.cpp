#include <stdio.h> 

int main() {
	char strings[3][10] = { "Hello","World","Doodle" };
	char* p_str[3];

	for (int i = 0; i < 3; i++) {
		//p_str[i] = &strings[i][0] 주소값 저장 하면 printf("%s",p_str[i])로 실행할시 알아서 배열의 첫번째 값부터 주소의 변수값을 실행
		p_str[i] = strings[i];
	}

	for (int i = 0; i < 3; i++) {
		printf("%s\n", p_str[i]); /*p_str[i]  = &p_str[i][0]*/
	}

}