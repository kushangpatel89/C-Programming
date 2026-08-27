#include<stdio.h>
int main(){
   float radious=10;
   float pi=3.1415;//use more degits after decimal gives more accurate output

   float area=pi*radious*radious;//define formula of circle area a=pi*r^2

   printf("area=%f\n",area);//print value of area

    printf("area=%f\n",3.1415*radious*radious);//use withour int area and pi
return(0);
}
