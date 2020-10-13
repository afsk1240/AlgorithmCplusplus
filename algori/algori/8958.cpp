#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	char s[80];
	int *arr = new int[n];


	for (int i = 0; i < n; ++i) {
		cin >> s;
		int total = 0;
		int cnt = 0;
		for (int j = 0; j < strlen(s); ++j) {
			if (s[j] == 'O' )  cnt++;
			else {
				cnt = 0;
				continue;
			}
			total += cnt;
			
		}
		arr[i] = total;
	}

	for (int i = 0; i < n; ++i) {
		cout << arr[i] << endl;
	}
}

