#include<stdio.h>
int main(){
    int num;
    printf("Enter Any Number: ");
    scanf("%d",&num);
    if(num%2==0){
        printf("Number is Even");
    }
    else{
        printf("Number is Odd");
    }
}