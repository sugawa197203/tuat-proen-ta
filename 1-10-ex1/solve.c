#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char name[5][2][100] = {0};

    for (int i = 0; i < 5; i++)
    {
        scanf("%s %s", name[i][0], name[i][1]);
    }

    for (int i = 0; i < 5; i++)
    {
        size_t len = strlen(name[i][0]);
        for (int j = 0; j < len; j++)
        {
            name[i][0][j] = toupper(name[i][0][j]);
        }

        len = strlen(name[i][1]);
        name[i][1][0] = toupper(name[i][1][0]);
        for (int j = 1; j < len; j++)
        {
            name[i][1][j] = tolower(name[i][1][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%s %s\n", name[i][1], name[i][0]);
    }
}
