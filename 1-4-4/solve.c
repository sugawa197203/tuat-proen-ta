#include <stdio.h>

int main(void)
{
    int n = 0;
    double ans = 0.0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        ans += (i % 2 == 0 ? 1.0 : -1.0) / (2 * i + 1); 
    }

    printf("%lf\n", ans * 4.0);

    return 0;
}
