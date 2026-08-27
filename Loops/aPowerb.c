#include<stdio.h>

//use int instead of void
//int returns the value to print to the main() function
int power(int a,int b){
    if(b==0) return 1; //take value of sum(1) = 1;
    int pow = a * power(a,b-1); //recursion formula to call sum till n==1
    return pow;
}

int main(){

int a;
printf("a base:");
scanf("%d",&a);
int b;
printf("b power:");
scanf("%d",&b);

printf("base %d power %d is =%d",a,b,power(a,b));//call to sum(n)
return 0;
}
