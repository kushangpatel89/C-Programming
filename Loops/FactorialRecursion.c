#include<stdio.h>

//use int instead of void
//int returns the value to print to the main() function
int fact(int n){
    if(n==0) return 1; //take value of sum(1) = 1;
    int F = n * fact(n-1); //recursion formula to call sum till n==1
    return F;
}

int main(){

int n;
printf("n:");
scanf("%d",&n);

printf("%d",fact(n));//call to sum(n)
return 0;
}
