#include<stdio.h>
int main(){
    int num,add=0,sum=0,avg=0;
    for(int i=1;i <=10; i++){
        printf("Enter the Number-%d: ",i);
        scanf("%d",&sum);
        add=sum+add;
    }
    printf("The Sum of 10 no is : %d",add);
    avg=add/10;
    printf("\nThe Average of 10 no is : %d",avg);
    return 0;

}