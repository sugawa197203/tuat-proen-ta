#include <stdio.h>
#include <string.h>

int check_password(const char *password, size_t length)
{
    int has_digit = 0;
    int has_lower = 0;
    int has_upper = 0;

    if (length < 8)
    {
        return 0; // Password is too short
    }

    for (size_t i = 0; i < length; i++)
    {
        if (password[i] >= '0' && password[i] <= '9')
        {
            has_digit = 1;
        }
        else if (password[i] >= 'a' && password[i] <= 'z')
        {
            has_lower = 1;
        }
        else if (password[i] >= 'A' && password[i] <= 'Z')
        {
            has_upper = 1;
        }
    }

    return has_digit && has_lower && has_upper;
}

int main()
{
    char password[100];
    char retype[100];
    fgets(password, sizeof(password), stdin);

    if (check_password(password, strlen(password)))
    {
        fgets(retype, sizeof(retype), stdin);
        if (strcmp(password, retype) != 0)
        {
            printf("Passwords do not match.\n");
            return 0;
        }
        printf("Password is valid.\n");
    }
    else
    {
        printf("Password is invalid.\n");
    }

    return 0;
}
