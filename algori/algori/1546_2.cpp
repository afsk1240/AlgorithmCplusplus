#include <stdio.h>
int main() {
    int n;
    int s = 0, temp, max = -1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        s += temp;
        if (max < temp)
            max = temp;
    }
    printf("%lf", (double)s / max * 100 / n);
    return 0;
}