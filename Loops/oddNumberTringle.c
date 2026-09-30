#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a = a + 2;
        }
        printf("\n");
    }
    return 0;
}