#include<stdio.h>
int main(){

 int x;

   printf("Enter a Number:");
   scanf("%d",&x);//scanf use to give input valur,"&" is called ampercent

   //type Casting
   float F=(float)x;//to convert int into float
   printf("The Half value is:%f",F/2);

return(0);

}
