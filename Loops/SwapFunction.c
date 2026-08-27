#include<stdio.h>

void swap(int a,int b){
//    method 1- ising extra variable temp

printf("2>x%d y%d\n",a,b);
int  temp = a;
  a = b;
  a = temp;
  printf("3>x%d y%d\n",a,b);
}

int main(){

int x , y;
    printf("x : ");
    scanf("%d",&x);
     printf("y : ");
    scanf("%d",&y);
    printf("1>x%d y%d\n",x,y);
//swap
    swap(x,y);
    printf(" value of x:%d and y:%d\n",x , y);


 return 0;
}
