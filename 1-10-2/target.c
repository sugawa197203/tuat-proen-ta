#include<stdio.h>

int main(void)
{
    char String[20]={'H','e','l','l','o','\0'};
    int i = 0;
    
    while(String[i] != '\0')
        printf("%c",String[i++]);

    printf("\n");
    return 0;
}
