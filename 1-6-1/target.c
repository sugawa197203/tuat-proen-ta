#include <stdio.h>

double Sub(double x, double y)
{
    double ans;
    ans = x - y;
    return ans;
}

int main(void)
{
    double x=5.0,y=1.0;
    printf("%f-%f = %f\n", x, y, Sub(x,y) );
    return 0;
}
