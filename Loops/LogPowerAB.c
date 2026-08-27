#include<stdio.h>

//use int instead of void
//int returns the value to print to the main() function
int power(int a,int b){
    if(b==0 ) return 1;
    int x = power(a,b/2) ;
    if(b%2==0) return x * x;
    else return x * x * a;

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
