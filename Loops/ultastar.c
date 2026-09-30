#include <stdio.h>
int main()
{
    int num;
    printf("Enter The Number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num + 1 - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}