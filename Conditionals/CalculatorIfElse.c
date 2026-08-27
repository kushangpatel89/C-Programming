#include<stdio.h>
int main(){

int a;
int b;
char ch; //+ - * /

    printf("ch:");
    scanf("%c",&ch);
    printf("a:");
    scanf("%d",&a);
     printf("b:");
    scanf("%d",&b);

//if else statement
//    if(ch=='+') printf("%d",a+b);
//    else if(ch=='-') printf("%d",a-b);
//    else if(ch=='*') printf("%d",a*b);
//    else if(ch=='/') printf("%d",a/b);
//    else printf("Invalid charactor");


//switch statement
//if not use break it runs the all aftrer program
//use defalut if any other character use
    switch(ch){
    case '+':
    printf("%d",a+b);
        break;  //use to break program from here and not process further
    case '-':
    printf("%d",a-b);
        break;
    case '*':
    printf("%d",a*b);
        break;
    case '/':
    printf("%d",a/b);
        break;
    default :
    printf("Invalid charactor");

    }

 return 0;
}
