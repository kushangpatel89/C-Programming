#include<stdio.h>
int main(){

int cost;
int sell;


    printf("cost Value is:");
    scanf("%d",&cost);
     printf("selling price is:");
    scanf("%d",&sell);

int x=sell-cost;

   if(x==0)
   printf("No Progress");
   if(x>0)
   printf("Profit:%d",x);
   if(x<0)
   printf("loss:%d",x);

 return 0;
}
