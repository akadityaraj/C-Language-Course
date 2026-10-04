#include <stdio.h>
void indian()
{
    printf("Namaste");
}
void french()
{
    printf("Bonjour");
}
int main()
{
    int num;
    printf("IF Indian press 1 \nIF French press 2\n");
    scanf("%d", &num);
    if (num == 1)
    {
        indian();
    }
    else
    {
        french();
    }
    return 0;
}