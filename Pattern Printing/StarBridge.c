#include<stdio.h>
int main(){

int n;//rows


    printf("Enter a Number of Rows:");
    scanf("%d",&n);

int i ,j ;

    for(i=1;i<=(2*n)-1;i++){ //for first row only
        printf("* ");
    }
    printf("\n");
int nst = n-1;
int nsp = 1;
    for(i=1;i<=n;i++){ //total no of columns
    for(j=1;j<=nst;j++){//first loop of stars
        printf("* ");
        }
    for(j=1;j<=nsp;j++){//second loop of space
        printf("  ");
        }
    for(j=1;j<=nst;j++){//third loop of stars=first loop
        printf("* ");
        }
        nst--;
        nsp+=2;
printf("\n");
    }
return 0;
}



