#include<stdio.h>
int main(){
    int num;
    printf("Enter Any Number: ");
    scanf("%d",&num);
    if(num>99 && num<999){
        printf("%d Is a Three Digit Number",num);
    }
    else{
        printf("%d Is not a Three Digit Number",num);
    }
    return 0;
}