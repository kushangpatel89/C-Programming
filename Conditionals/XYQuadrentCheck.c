#include<stdio.h>
int main(){

int x;
int y;

    printf("x:");
    scanf("%d",&x);
     printf("y:");
    scanf("%d",&y);
//
//    if(x>0){
//        if(y>0) printf("first Quadrent");
//        else  printf("Forth Quadrent");
//    }
//    else{
//        if(y>0) printf("Second Quadrent");
//        else printf("Third Quadrent");
//    }
//

if(x>0 && y>0) printf("point lies on first Quadrent");
else if (x<0 && y>0) printf("point lies on Second Quadrent");
else if(x<0 && y<0) printf("point lies on Third Quadrent");
else if(x>0 && y<0) printf("point lies on Forth Quadrent");
else if(x==0) printf("Point lies on y axis");
else if(y==0) printf("point lies on x axis");
else if(x==0 && y==0) printf("point lies on Origin");

    return 0;
}
