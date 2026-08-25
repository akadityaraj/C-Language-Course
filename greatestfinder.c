#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Your First Number:");
    scanf("%d", &a);
    printf("Enter Your Secound Number:");
    scanf("%d", &b);
    printf("Enter Your Third Number:");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("%d is Greater Number", a);
    }
    if (b > a && b > c)
    {
        printf("%d is Greater Number", b);
    }
    if (c > a && c > b)
    {
        printf("%d is Greater Number", c);
    }
    return 0;
}