#include<stdio.h>
int main(){

int x;

    printf("x:");
    scanf("%d",&x);
//conditions for check value divisible by 5 or 3 and not by 15
    if(x%15!=0){
        if(x%3!=0){
            if(x%5==0) printf("Condition Valid");
            else printf("condition Invalid");//if condition x%5!=0
        }
        else printf("Condition Valid");//codition x%3==0
    }

    else  printf("Condition Invalid");//if condition x%15==0


 return 0;
}
