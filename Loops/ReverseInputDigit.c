#include<stdio.h>
int main(){

int n;

    printf("n:");
    scanf("%d",&n);
int a = n; //store given number n in a
int ld; //last digit
int r=0;//Reverse Digit
int sum=0;
while(n!=0){

    ld = n % 10; //stores last digit of value n
    r = r * 10 + ld;//formula for reverse digit
   // r = r + ld;
    n /= 10; //(n=n/10) devide n digit up to n == 0

    sum *=  ld; //Same as (sum = sum+ld)add every last digits till n == 0

}
    printf("Reverse Of Number is:%d\n",r);


    printf("sum of given Number and Reverse Number is:%d\n",a+r);

 return 0;
}
