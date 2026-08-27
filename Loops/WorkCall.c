#include<stdio.h>


void print(int n){
    if(n==0) return;
     printf("%d ",n);//work
  //interchange work and call of n to 1 program
    print(n-1);//Self call
    printf("%d ",n);//work
}

int main(){

int n;
printf("n:");
scanf("%d",&n);

print(n);
return 0;
}
