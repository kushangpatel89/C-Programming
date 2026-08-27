#include<stdio.h>
int main(){

int Ram;
int Shyam;
int Ajay;
//sides of a triangle a,b and c
    printf("Age of Ram is:");
    scanf("%d",&Ram);
    printf("Age of Shyam is:");
    scanf("%d",&Shyam);
    printf("Age of Ajay is:");
    scanf("%d",&Ajay);
//Nested conditions to check Youngest Age
   if(Ram<Shyam){
        if(Ram<Ajay) printf("Ram is Youngest",Ram);
        else printf("Ajay is Youngest",Ajay);//means Ajay<Ram and already ram<shyam so ajay<Ram<Shyam

   }
   else {
        if (Shyam<Ajay) printf("Shyam is Youngest",Shyam);//means SHyam<Ajay and shyam<ram so Shyam<ram<ajay
        else printf("Ajay is Youngest",Ajay);// means Ajay<Shyam and already Shyam<ram so Ajay<Shyam<ram
   }
 return 0;
}
