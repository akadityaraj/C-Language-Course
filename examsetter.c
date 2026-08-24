#include<stdio.h>
int main(){
    int mark,att;
    printf("Entery your Mark: ");
    scanf("%d",&mark);
    printf("Entery your Att: ");
    scanf("%d",&att);
    if(att>=75){
        if(mark>40){
            printf("You Are Pass");
        }
        else{
            printf("You Are Fail");
        }
    }
    else{
        printf("You Are Not Pass");
    }
    return 0;
}