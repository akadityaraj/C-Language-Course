#include <stdio.h>
int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        int a=1;
        for (int j = 1; j <= num - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
          int d = a + 64;
            char ch = (char)d;
            printf("%c", ch);
            a++;
        }
        printf("\n");
    }
}