#include<stdio.h>
int main(){
    int year;
    printf("Enter the Year: ");
    scanf("%d",&year);
    if(year % 4 == 0){
        printf("Year %d is Leap Year",year);
    }
    else{
        printf("Year %d is not Leap Year",year);
    }
}