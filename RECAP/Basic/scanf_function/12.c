#include <stdio.h>

int main()
{
    int amount;
    int note500, note100, note50, note10, note5, note1;

    scanf("%d", &amount);

    // Calculate the number of notes
    note500 = amount / 500;
    amount %= 500;

    note100 = amount / 100;
    amount %= 100;

    note50 = amount / 50;
    amount %= 50;

    note10 = amount / 10;
    amount %= 10;

    note5 = amount / 5;
    amount %= 5;

    note1 = amount;

    // Output the result
    printf("%d note(s) of 500\n", note500);
    printf("%d note(s) of 100\n", note100);
    printf("%d note(s) of 50\n", note50);
    printf("%d note(s) of 10\n", note10);
    printf("%d note(s) of 5\n", note5);
    printf("%d note(s) of 1\n", note1);
}