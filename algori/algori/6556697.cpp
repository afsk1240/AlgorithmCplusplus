#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int mins = 99999999;
	int maxs = -99999999;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		if (num > maxs)
			maxs = num;
		if (num < mins)
			mins = num;
	}
	cout << mins << " " << maxs << endl;
	return 0;
}