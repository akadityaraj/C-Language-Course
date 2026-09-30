#include<stdio.h>
int main(){
    int row,col;
    printf("Enter the Number of Rows: ");
    scanf("%d",&row);
    printf("Enter the Number of Coloum: ");
    scanf("%d",&col);
    for(int i=1;i<=col;i++){
        for(int i=1;i<=row;i++){
            printf("%d",i);
        }
        printf("\n");
    }

}