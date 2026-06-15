#include <stdio.h>

int whcount(char *s)
{
    int c = 0;

    while(*s != '\0')
    {
        if(*s == ' ')
            c++;
        s++;
    }
    return c;
}

int main(void)
{
    int count;
    char String[40]="I am a student of TUAT";
    count = whcount(String);
    printf("空白の数は%dです\n", count);
    return 0;
}
