#include<stdio.h>

int main(){

int x = 5 ;
int* z = &x; //store the adress of x in z1


printf("%d\n",x); //print value of x
printf("%p\n",&x); //print address of x

*z = 9;

printf("%d\n",x); //print value of x
printf("%p\n",&x); //print address of x


 return 0;
}
