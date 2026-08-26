#include <stdio.h>
int main()
{
    int mark;
    printf("Enter Your Mark: ");
    scanf("%d", &mark);
    if (mark >= 90)
    {
        printf("A Grader");
    }
    else if (mark >= 80)
    {
        printf("B Grader");
    }
    else if (mark >= 70)
    {
        printf("C Grader");
    }
    else if (mark >= 60)
    {
        printf("D Grader");
    }
    else if (mark >= 50)
    {
        printf("D Grader");
    }
    else if (mark >= 40)
    {
        printf("E Grader");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}