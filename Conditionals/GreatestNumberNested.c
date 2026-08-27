#include<stdio.h>
int main(){

int a;
int b;
int c;
//sides of a triangle a,b and c
    printf("a:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);
    printf("c:");
    scanf("%d",&c);
//Nested conditions to check greatest Number
   if(a>b){
        if(a>c) printf("%d is greatest Number",a);
        else printf("%d is greatest Number",c);//means c>a and already a>b so c>a>b

   }
   else {
        if (b>c) printf("%d is greatest Number",b);//means b>a and c
        else printf("%d is greatest Number",c);// means c>b and already b>a sp c>b>a
   }
 return 0;
}
