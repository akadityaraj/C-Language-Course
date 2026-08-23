#include <stdio.h>

int main() {
   int cp,sp,p,l;
    printf("Enter your Buying Price: ");
    scanf("%d",&cp);
    printf("Enter your Selling Price: ");
    scanf("%d",&sp);
    if(sp > cp){
        printf("\nProfit");
        p = sp - cp;
        printf("\nThe Profit is %d",p);
    }
    else if(sp == cp){
        printf("Not Profit and Loss");
    }
    else{
        printf("\nLoss");
        l = cp - sp;
        printf("\nThe Loss is %d",l);
    }
    return 0;
}
