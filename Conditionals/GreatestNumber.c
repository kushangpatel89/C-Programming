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

    if(a>b && a>c) // if all three conditions are true
    printf("%d is Gretest Number",a);
     if(b>c && b>a) // if all three conditions are true
    printf("%d is Gretest Number",b);
    else
    printf("%d is Gretest Number",c);

 return 0;
}
