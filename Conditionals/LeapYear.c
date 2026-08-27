#include<stdio.h>
int main(){

int x;

    printf("Enter a Year:");
    scanf("%d",&x);

    if(x%400==0 || (x%4==0 && x%100!=0)) // formula or condition to check leap year
    printf("Leap Year");
    else
    printf("Not a Leap year");

 return 0;
}
