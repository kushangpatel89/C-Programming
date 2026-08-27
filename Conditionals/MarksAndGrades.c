#include<stdio.h>
int main(){

int x;

    printf("Enter a Percentage:");
    scanf("%d",&x);
//(1) By using Multiple conditios
//    if(x>=81 && x<=100) printf("Excellent");
//    if(x>=61 && x<=80) printf("Very Good");
//    if(x>=40 && x<=60) printf("Average");
//    if(x<=40) printf("Fail");
//    if(x>100) printf("Invalid Number");

// (2) Using Nested If-Else
//    if(x>=81) printf("Excellent");
//    else{
//        if(x>=61) printf("Very Good");//x<=81
//        else{
//            if(x>=41) printf("Average");//x<=61
//            else printf("Fail");//x<=41
//        }
//    }

//(3) Using Else IF
    if(x>=81) printf("Excellent");
    else if(x>=61) printf("Very Good");
    else if(x>=41) printf("Average");
    else printf("Fail");

 return 0;
}
