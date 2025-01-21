#include <stdio.h>

int main()
{
    char ch;
    scanf(" %c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("Alphabet\n");
    }
    else
    {
        if (ch >= '0' && ch <= '9')
        {
            printf("Digit\n");
        }
        else
        {
            printf("Special\n");
        }
    }

    return 0;
}