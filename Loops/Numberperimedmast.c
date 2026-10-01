#include <stdio.h>
int main()
{
    int n, nst;
    printf("Enter Any Number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a = i - 1;
        int b=1;
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            int d = b + 64;
            char ch = (char)d;
            printf("%c", ch);
            b++;
        }
        for (int l = 1; l <= i - 1; l++)
        {
            char ch = (char)(a + 64); 
            printf("%c", ch);
            a--;
         
        }

        printf("\n");
    }
    return 0;
}