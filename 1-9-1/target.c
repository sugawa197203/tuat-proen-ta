#include <stdio.h>
#define N 10

void Scalar(int *a, int k)
{
    int i;
    for(i=0; i<N; i++) a[i] = k * a[i];
}

int main(void)
{
    int i;
    int a[N], k=3;
    for(i=0; i<N; i++) a[i] = i;
    Scalar(&a[0], k);
    for(i=0; i<N; i++) printf("a[%d]は%d\n", i, a[i]);
    return 0;
}