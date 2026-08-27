#include<stdio.h>
int main(){

int n;

    printf("n:");
    scanf("%d",&n);

int count=0;
//here we are counting total number of time loop runs
//n = n/10 is a formula to check total digits
//it will count untill n!=0 and when n == 0 loop stops and print total counts
while(n!=0){
    n = n / 10;
    count++;
}
    printf("Total Digits: %d",count);

 return 0;
}

