#include<stdio.h>
int main(){

float f;//which velue to check if it is integer or not

    printf("f:");
    scanf("%f",&f);

    //first convert float value in integer
   int x = (int)f;//convert float value in int and store in x
   int a = (float)x;//define final value of x

   if(f-a==0)
   printf("Number is Integer");
    if(f-a>0)
   printf("Number is Not Integer");


 return 0;
}
