#include <stdio.h>
int main()
{
    int num;
    printf("Enter The Number: ");
    scanf("%d", &num);
    if (num % 3 == 0 || num % 5 == 0)
    {
        if (num % 15 != 0)
        {
            printf("%d is Divided by 3 ya 5 but not 15", num);
        }
        else
        {
            printf("%d is Divided by 3 ya 5 and 15", num);
        }
    }

    else
    {
        printf("%d is not Divided by 3 ya 5 and 15", num);
    }
    return 0;
}