#include <stdio.h>

int wdcount(char *s)
{
    int c = 0;
    while(*s != '\0')
    {
        while(*s == ' ') s++;
        if(*s != '\0') c++;
        while((*s != ' ') && (*s != '\0')) s++;
    }
    return c;
}

int main(void)
{
    int count;
    char String[40] = "I am a student of TUAT";
    count = wdcount(String);
    printf("英単語の数は%dです\n", count);
    return 0;
}
