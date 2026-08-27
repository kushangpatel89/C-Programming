#include<stdio.h>

//use int instead of void
//int returns the value to print to the main() function
int sum(int n){
int s = 0;
   for(int i = 0;i<=n; i++){
    s += i;//add the value of i to sum = sum+i
   }
   return s;//retuen the value of s to main()-> sum(n)
}

int main(){

int n;
printf("n:");
scanf("%d",&n);

printf("%d",sum(n));//call to sum(n)
return 0;
}
