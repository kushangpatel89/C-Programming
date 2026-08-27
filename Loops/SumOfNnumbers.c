#include<stdio.h>


void sum1toN(int n, int sum){
    if(n==0){
        printf("=%d",sum);
     return;
    }
     printf("%d + ",n);//work
    sum1toN(n-1,sum+n);//Self call

}

int main(){

int n;
printf("n:");
scanf("%d",&n);

sum1toN(n,0);
return 0;
}
