#include<stdio.h>
int main(){

int n;

    printf("n:");
    scanf("%d",&n);

int sum = 1;
int ld; //last digit
while(n!=0){

    ld = n % 10; //stores last digit of value n
    n /= 10; //(n=n/10) devide n digit up to n == 0

    sum *=  ld; //Same as (sum = sum+ld)add every last digits till n == 0

     printf("Total Product Of Digit is:%d\n",sum);

}


 return 0;
}
