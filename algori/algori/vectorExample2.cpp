#include <iostream>
#include <vector> 
using namespace std;

int main() {
	vector<double> v(3);
	double elem;
	// v 벡터 값을 복사한후 하나씩 입력함
	for (int i = 0 ; i < 3 ;++i) {
		cin >> elem;
		v[i] = elem;
	}
	
	// v 벡터 값을 복사 해서 출력함
	for (double elem : v)  cout << elem << '\t';
	cout << endl;
	// v 벡터 값을 reference 해서 출력함
	for (double& elem : v) cout << elem << '\t';
	cout << endl;
	return 0;

}