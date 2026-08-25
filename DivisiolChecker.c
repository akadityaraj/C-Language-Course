#include <stdio.h>
int main()
{
    int num;
    printf("Enter Any Number: ");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("%d Number is Divided By 5 and 3", num);
    }
    else
    {
        printf("%d Number is Not Divided By 5 and 3", num);
    }
}