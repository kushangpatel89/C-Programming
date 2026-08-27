#include<stdio.h>
int main(){

int x;

    printf("x:");
    scanf("%d",&x);

    if((x%5==0 || x%3==0) && x%15!=0) // divisible by 5 or 3 and not 15
    printf("Divisible by 5 or 3 but Not 15");
    else
    printf("Not Divisible by 5 or 3 and 15");

 return 0;
}
