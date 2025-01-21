#include <stdio.h>

int main()
{
    char ch;
    scanf(" %c", &ch);

    switch (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
    case 1:
        printf("Alphabet\n");
        break;
    case 0:
        switch (ch >= '0' && ch <= '9')
        {
        case 1:
            printf("Digit\n");
            break;
        case 0:
            printf("Special\n");
            break;
        }
        break;
    }

    return 0;
}