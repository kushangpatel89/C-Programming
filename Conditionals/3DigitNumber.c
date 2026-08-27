#include<stdio.h>
int main(){

int x;

    printf("x:");
    scanf("%d",&x);

    if(x>=99 && x<=1000) //&& is a logical "and"
    printf("It is Three Digit Number");
    else
    printf("It is Not a Three Digit Number");

 return 0;
}
