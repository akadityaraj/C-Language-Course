#include<stdio.h>
int main(){
    int n;
    printf("Enter any Number: ");
    scanf("%d",&n);
    printf("The first %d Natural number is:\n",n);
    int sum = 0;
    for(int i=0; i <=n; i++){
        printf("%d ",i);
        sum = i + sum;
    }
    printf("\nThe Sum of Natural Number upto %d terms: %d ",n,sum);
    return 0;
}