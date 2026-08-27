#include<stdio.h>
int main(){

int x;



     printf("Enter a Day:");
    scanf("%d",&x);




//switch statement
//if not use break it runs the all aftrer program
//use defalut if any other character use
    switch(x){
    case 1:
    printf("Monday");
    break;
    case 2:
    printf("Tuesday");
    break;
    case 3:
    printf("Wednesday");
    break;
    case 4:
    printf("Thursday");
    break;
    case 5:
    printf("Friday");
    break;
    case 6:
    printf("Saturday");
    break;
    case 7:
    printf("Sunday");
    break;


    default :
    printf("Invalid charactor");

    }

 return 0;
}
