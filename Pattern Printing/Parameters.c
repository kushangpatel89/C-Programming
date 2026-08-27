#include<stdio.h>


void oddEven(int x){ //int x is called parameters or arguments where int x = a
    if(x%2==0) printf("%d is Even Number",x);
    else  printf("%d is Even Number",x);
    }

//it is a 'main' function program is always starts from here
//it only go to void if we use greet() in main function
int main(){
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    oddEven(a); //pass by value of a to -> int x

 return 0;
}
