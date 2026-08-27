#include<stdio.h>
int main(){

int n;

    printf("n:");
    scanf("%d",&n);
//addition of digits if n= 243 then 2+4+3 = 9
//hint its also shows like 3+4+2
//so we can store every last digit(ld) by formula n%10
//value of n/10 till n reach to 0
//sum the last digit with previous digit till value of n ==0

int sum = 0;
int ld; //last digit
while(n!=0){
    ld = n % 10; //stores last digit of value n
    n /= 10; //devide n digit up to n == 0
     sum += ld; //Same as (sum = sum+ld)add every last digits till n == 0


}
    printf("Total Sum Of Digits: %d",sum);

 return 0;
}

