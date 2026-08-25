#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter The A side: ");
    scanf("%d", &a);
    printf("Enter The B side: ");
    scanf("%d", &b);
    printf("Enter The C side: ");
    scanf("%d", &c);
    if(a+b>c && b+c>a && c+a>b){
        printf("Tringle is Valid");
    }
    else{
        printf("Traingle is Invalid");
    }
    return 0;
}