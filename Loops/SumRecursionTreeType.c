#include<stdio.h>

//use int instead of void
//int returns the value to print to the main() function
int sum(int n){
    if(n==1) return 1; //take value of sum(1) = 1;
    int recAns = n + sum(n-1); //recursion formula to call sum till n==1
    return recAns;
}

int main(){

int n;
printf("n:");
scanf("%d",&n);

printf("%d",sum(n));//call to sum(n)
return 0;
}
