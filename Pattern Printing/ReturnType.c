#include<stdio.h>


int min(int x , int y){ //int x is called parameters or arguments where int x = a
    if(x<y) return x;
    else  return y;
    }

//it is a 'main' function program is always starts from here
//it only go to void if we use greet() in main function
int main(){
    int a , b;
    printf("Enter a Number a: ");
    scanf("%d",&a);
    printf("Enter a Number b: ");
    scanf("%d",&b);

    int m = min(a,b);
    printf("Min of %d and %d is :%d",a,b,m);

 return 0;
}
