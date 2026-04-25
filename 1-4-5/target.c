#include <stdio.h>

int main(void)
{
    int n = 0;
    double left = 0.0, right = 0.0;
    double _5 = 5.0, _239 = 239.0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        left += (i % 2 == 0 ? 1.0 : -1.0) / (2 * i + 1) / _5;
        right += (i % 2 == 0 ? 1.0 : -1.0) / (2 * i + 1) / _239;

        _5 *= 25.0;
        _239 *= 57121.0;
    }

    printf("%lf\n", left * 16.0 - right * 4.0);

    return 0;
}
