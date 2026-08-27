#include<stdio.h>
#include<math.h>

int a = 7;

int change(){
a = 5;
}

int main(){
int a = 0;
printf("%d ",a);
change();

printf("%d ",a);


 return 0;
}
