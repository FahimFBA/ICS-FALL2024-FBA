#include <stdio.h>

int main()
{
    float marks;
    printf("Enter the marks: ");
    scanf("%f", &marks);

    if (marks >= 90 && marks <= 100)
    {
        printf("Letter Grade: A (Plain)\nGrade Point: 4.00\n");
    }
    else if (marks >= 86 && marks < 90)
    {
        printf("Letter Grade: A- (Minus)\nGrade Point: 3.67\n");
    }
    else if (marks >= 82 && marks < 86)
    {
        printf("Letter Grade: B+ (Plus)\nGrade Point: 3.33\n");
    }
    else if (marks >= 78 && marks < 82)
    {
        printf("Letter Grade: B (Plain)\nGrade Point: 3.00\n");
    }
    else if (marks >= 74 && marks < 78)
    {
        printf("Letter Grade: B- (Minus)\nGrade Point: 2.67\n");
    }
    else if (marks >= 70 && marks < 74)
    {
        printf("Letter Grade: C+ (Plus)\nGrade Point: 2.33\n");
    }
    else if (marks >= 66 && marks < 70)
    {
        printf("Letter Grade: C (Plain)\nGrade Point: 2.00\n");
    }
    else if (marks >= 62 && marks < 66)
    {
        printf("Letter Grade: C- (Minus)\nGrade Point: 1.67\n");
    }
    else if (marks >= 58 && marks < 62)
    {
        printf("Letter Grade: D+ (Plus)\nGrade Point: 1.33\n");
    }
    else if (marks >= 55 && marks < 58)
    {
        printf("Letter Grade: D (Plain)\nGrade Point: 1.00\n");
    }
    else if (marks >= 0 && marks < 55)
    {
        printf("Letter Grade: F (Fail)\nGrade Point: 0.00\n");
    }
    else
    {
        printf("Invalid input\n");
    }

    return 0;
}