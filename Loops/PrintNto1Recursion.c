#include<stdio.h>

void greet(int n){
    if(n==0) return;//condition to end program
    printf("%d\n",n);//work
    greet(n-1);//self function call
}
int main(){

int n;
printf("n:");
scanf("%d",&n);

greet(n);
return 0;
}
