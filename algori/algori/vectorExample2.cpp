#include <iostream>
#include <vector> 
using namespace std;

int main() {
	vector<double> v(3);
	double elem;
	// v ���� ���� �������� �ϳ��� �Է���
	for (int i = 0 ; i < 3 ;++i) {
		cin >> elem;
		v[i] = elem;
	}
	
	// v ���� ���� ���� �ؼ� �����
	for (double elem : v)  cout << elem << '\t';
	cout << endl;
	// v ���� ���� reference �ؼ� �����
	for (double& elem : v) cout << elem << '\t';
	cout << endl;
	return 0;

}