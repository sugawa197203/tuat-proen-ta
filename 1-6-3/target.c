#include <stdio.h>

double power(double x, int n)
{
    double ans = 1.0;
    for (int i = 0; i < n; i++)
    {
        ans *= x;
    }
    return ans;
}

int main(void)
{
    double a = 3.0;
    int b = 3;
    double ans = power(a, b);

    printf("%fの%d乗は%f\n", a, b, ans);

    return 0;
}
