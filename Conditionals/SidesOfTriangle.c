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

    if(a+b>c && a+c>b && b+c>a) // if all three conditions are true
    printf("Valid triangle");
    else
    printf("Invalid triangle");

 return 0;
}
