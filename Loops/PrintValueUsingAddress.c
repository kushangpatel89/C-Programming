#include<stdio.h>

int main(){

int x = 5 ;
int* z = &x; //store the adress of x in z1


printf("%d\n",x); //print value of x
printf("%p\n",&x); //print address of x
printf("%p\n",z); //print address of x in container z -> use %p
printf("%p\n",&z); //print the address of z
printf("%d\n",*z); //print value of x -> use *z

 return 0;
}
