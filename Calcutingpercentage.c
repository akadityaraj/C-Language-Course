#include<stdio.h>
int main (){
    int m1,m2,m3,m4,m5,total;
    float percent;
    printf("Enter First subject Mark: ");
    scanf("%d",&m1);
    printf("Enter Second subject Mark: ");
    scanf("%d",&m2);
    printf("Enter Third subject Mark: ");
    scanf("%d",&m3);
    printf("Enter Fourth subject Mark: ");
    scanf("%d",&m4);
    printf("Enter Fifth subject Mark: ");
    scanf("%d",&m5);
    total = m1+m2+m3+m4+m5;
    printf("total mark %d",total);
    percent =  total/5.0;
    printf("\nAverage Marks %f",percent);
}