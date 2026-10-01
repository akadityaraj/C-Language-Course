#include <stdio.h>
int main()
{
    int rows, col;
    printf("Enter the Rows: ");
    scanf("%d", &rows);
    printf("Enter the Coloum: ");
    scanf("%d", &col);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (j == 1 || j == col || i == 1 || i == rows)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}