#include <stdio.h>

double GetArea3(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double a = (x1 - x3) * (y2 - y3);
    double b = (x2 - x3) * (y1 - y3);
    double ab = a - b;
    return 0.5 * (ab < 0 ? -ab : ab);
}

int main(void)
{
    double x1, y1, x2, y2, x3, y3;

    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);

    double area = GetArea3(x1, y1, x2, y2, x3, y3);
    printf("%lf\n", area);

    return 0;
}
