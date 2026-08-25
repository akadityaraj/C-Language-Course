#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter Your First Number:");
    scanf("%d", &a);
    printf("Enter Your Secound Number:");
    scanf("%d", &b);
    printf("Enter Your Third Number:");
    scanf("%d", &c);
    printf("Enter Your Fourth Number:");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("%d is Greater Number", a);
    }
    if (b > a && b > c && b > d)
    {
        printf("%d is Greater Number", b);
    }
    if (c > a && c > b && c > d)
    {
        printf("%d is Greater Number", c);
    }
    if (d > a && d > b && d > c)
    {
        printf("%d is Greater Number", d);
    }
    return 0;
}