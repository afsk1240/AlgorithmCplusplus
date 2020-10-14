#include <cstdio> 

using namespace std;

int main() {
	int a, b, e;
	double x, num, c[1010], f;

	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d", &b);

		num = 0;
		e = 0;
		for (int j = 0; j < b; j++) {
			scanf("%lf", &x);
			num += x;
			c[j] = x;
		}
		f = num / (double)b;
		for (int k = 0; k < b; k++) {
			if (f < c[k]) e++;
		}
		printf("%.3lf%\n", (double)e / (double)b * 100);
	}
}