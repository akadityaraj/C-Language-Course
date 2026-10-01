#include <stdio.h>
int main()
{
    int num;
    printf("Enter The Number : ");
    scanf("%d", &num);
    int a;
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            a = 1;
        }
        else
        {
            a = 0;
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", a);
            if (a == 0)
            {
                a = 1;
            }
            else
            {
                a = 0;
            }
        }
        printf("\n");
    }
    return 0;
}