#include<stdio.h>
int main(){
    int len,bre,area,pere;
    printf("Enter the length: ");
    scanf("%d",&len);
    printf("Enter the breadth: ");
    scanf("%d",&bre);
    area = len * bre;
    pere = 2 * (len+bre);
    if(area>pere){
        printf("Area is greater");
    }
    else if(pere>area){
        printf("Perimeter is greater");
    }
    else{
        printf("Both are equal");
    }
    return 0;
}