#include<stdio.h>


int main(){

int x , y;
    printf("x : ");
    scanf("%d",&x);
     printf("y : ");
    scanf("%d",&y);

    printf(" value of x is %d and y is %d\n",x , y);
    printf("swap the value of x and y\n");

  //swap values of x and y
//method 1- ising extra variable temp
//int  temp = x;
//  x = y;
//  y = temp;
//   printf(" value of x is %d y is %d\n",x , y);

//method 2 without using extra variable
 x = x + y; printf("x:%d y:%d\n",x,y);
 y = x - y; printf("x:%d y:%d\n",x,y);
 x = x - y; printf("x:%d y:%d\n",x,y);

 return 0;
}
