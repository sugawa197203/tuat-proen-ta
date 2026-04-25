#include <stdio.h>

int main(void)
{
    int year;
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        printf("うるう年\n");
    else
        printf("うるう年ではない\n");

    return 0;
}
