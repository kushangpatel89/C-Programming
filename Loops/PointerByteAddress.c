#include<stdio.h>

int main(){

int x = 5 ;
int* z1 = &x; //store the adress of x in z1
int y =9;
int *z2 = &y; //store the value of y in z2

//%p is used when we want to print address
//printf("%p",&x); //&x use for address of x print

printf("%p\n",z1);
printf("%p\n",z2);

 return 0;
}
