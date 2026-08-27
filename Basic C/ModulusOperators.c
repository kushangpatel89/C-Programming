#include<stdio.h>
int main(){

  int a=-150;
  int b=-13;
  int c=a%b;//% use as Modulus Operator to get reminder output

  //reminder is use to check if number is devidable or not
  //if devidable gives output 0
  //if nor devidable gives output number 1 to 9
  //a%b = a if a<b

  //Miscellaneous Cases
  //a%(-b)== a%b output is +
  //(-a)%b = -[a%b] output is -Negetive
  //(-a)%(-b) = -[a%b] Output is - Negetive

   printf("Reminder:%d",c);


return(0);
}
