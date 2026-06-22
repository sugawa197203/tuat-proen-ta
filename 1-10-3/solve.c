#include<stdio.h>
int main(void)
{
    char String[20];
    int i = 0;

    scanf("%19s", String);

    while(String[i] != '\0'){

    if(String[i] >= 'a' && String[i] <= 'z')
        String[i] = String[i] + ('A' - 'a');
        i++;
    }

    printf("%s\n", String);
    return 0;
}
