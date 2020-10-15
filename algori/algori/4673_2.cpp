#include <stdio.h>

int main()
{
	int arr[20000] = { 0 };
	for (int i = 1; i < 10000; i++)
	{
		if (arr[i] == 0)printf("%d\n", i);

		int b = i;
		int c = 0;	
		while (b != 0)
		{
			c += b % 10;
			b /= 10;
		}
		if (c+i > 9993) {
			int tmp = 9993;
		}
		arr[i + c] = 1;
	}
}