#include<stdio.h>
int main(void)
{
    int n,m;

    printf("割られる数は?:");
    scanf("%d",&n);
    printf("割る数は?:");
    scanf("%d",&m);

    printf(" %d ÷ %d = %d あまり %d\n", n, m, n/m, n%m);
    return 0;
}
