#include<stdio.h>
int main(){

int x;

    printf("x:");
    scanf("%d",&x);
//conditions for check value divisible by 5 and 3
    if(x%5==0){
        if(x%3==0) printf("Divisible by 5 and 3");
        else printf("Not Divisible by 5 and 3");
    }

    else  printf("Not Divisible by 5 and 3");


 return 0;
}
