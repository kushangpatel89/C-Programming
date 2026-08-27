#include<stdio.h>
int main(){

int x;

    printf("x:");
    scanf("%d",&x);

    if(x%5==0 || x%3==0) // "||" is a logical "Or"
    printf("Divisible by 5 or 3");
    else
    printf("Not Divisible by 5 or 3");

 return 0;
}
