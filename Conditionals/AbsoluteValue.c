#include<stdio.h>
int main(){

int x;

    printf("x:");
    scanf("%d",&x);

    //if Statement
    if(x>=0) printf("Absolute value is: %d",x);
    if(x<0) {

    x = x * (-1);//make value negetive to positive
    printf("Absolute value is:%d",x);
    }


 return 0;
}
