#include<stdio.h>
int main(){
    int num;
    printf("Enter any Number: ");
    scanf("%d",&num);
    if(num % 5 == 0){
        printf("Number is Divided by 5");
    }
    else{
        printf("Number is not Divided by 5");
    }
}