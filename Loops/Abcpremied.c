#include <stdio.h>
int main()
{
    int n, nst;
    printf("Enter Any Number: ");
    scanf("%d", &n);
    nst = 1;
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= nst; k++)
        {
            int d = a + 64;
            char ch = (char)d;
            printf("%c", ch);
            a++;
        }
        nst = nst + 2;
        printf("\n");
    }
    return 0;
}