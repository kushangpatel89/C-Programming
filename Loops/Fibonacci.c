#include<stdio.h>

//use int instead of void
//int returns the value to print to the main() function
int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-1)+fibo(n-2); //fibonacci formula
}

int main(){

int n;
printf("n:");
scanf("%d",&n);

printf("%d",fibo(n));//call to sum(n)
return 0;
}
