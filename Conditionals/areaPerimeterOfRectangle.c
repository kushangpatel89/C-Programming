#include<stdio.h>
int main(){

float l;//length of rectangle
float w;//width of rectangle


    printf("length of rectangle is:");
    scanf("%f",&l);
    printf("width of rectangle is:");
    scanf("%f",&w);

float A = l * w;//calculate Area of rectangle
    printf("Area: %f\n",A);
float P = 2 *(l+w);//calculate Perimeter if rectangle
    printf("Perimeter: %f\n",P);

   if(A>P)
   printf("Area is Greater then perimeter\n");
   else
   printf("perimeter is Greater then Area\n");

 return 0;
}
