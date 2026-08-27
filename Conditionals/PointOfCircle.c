#include<stdio.h>
int main(){

//define integer for center of a circle
int a=2;
int b=3;

int r=10;//radious of a circle

//user input points to check
int x;
int y;

int p;//formula to find point Position

    printf("x:");
    scanf("%d",&x);
     printf("y:");
    scanf("%d",&y);

     p = (x-a)*(x-a) + (y-b)*(y-b);
     printf("p:%d\n",p);
     int R = r*r;
     printf("R:%d\n",R);

 if(p==R) printf("Point Lies on the Circle");
 else if(p>R) printf("Point Lies outside the Circle");
 else if(p<R) printf("Point Lies inside the Circle");


    return 0;
}
