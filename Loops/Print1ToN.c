#include<stdio.h>

//method 1 using extra parameter
//void print(int i,int n){
//    if(i>n) return;
//    printf("%d\n",i);
//    print(i+1,n);
//}

//Mathod 2 - without susing extra parameter
void print(int n){
    if(n==0) return;
  //interchange work and call of n to 1 program
    print(n-1);//Self call
    printf("%d\n",n);//work
}

int main(){

int n;
printf("n:");
scanf("%d",&n);

print(n);//mathod 2
//print(1,n);//mathod 1
return 0;
}
