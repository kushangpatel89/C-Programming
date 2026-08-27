#include<stdio.h>
int main(){

int m;//rows


    printf("Enter a Number of Rows:");
    scanf("%d",&m);
 //for solid square take only one ineger as no of rows and columns are same
int i , j ;

//Method 1
//    for(i=1;i<=m;i++){ //rows
//        for(j=1;j<=m;j++){ //columns
//            if(i+j >  m) printf("* ");
//            else printf("  ");// # replace with space for only * pattern
//
//        }
//        printf("\n");
//    }

//Method 2
    for(i=1;i<=m;i++){ //OuterLoop 1
        for(j=1;j<=m-i;j++){ //Print spaces
          printf("  ");
        }
        for(j=1;j<=i;j++){ //print *

           printf("*");// # replace with space for only * pattern

        }
        printf("\n");
    }

    return 0;
}
