#include<stdio.h>
int main(){

int n;

    printf("n:");
    scanf("%d",&n);

int sum = 0;
int ld; //last digit
while(n!=0){

    ld = n % 10; //stores last digit of value n
    n /= 10; //(n=n/10) devide n digit up to n == 0
    if(ld%2!=0) continue; //formula to skip odd Numbers of last digit
    else sum +=  ld; //Same as (sum = sum+ld)add every last digits till n == 0

     printf("Total Sum Of Even Numberis:%d\n",sum);

}


 return 0;
}
