#include<stdio.h>
int main(){

int m;//rows


    printf("Enter a Number of Rows:");
    scanf("%d",&m);
 //for solid square take only one ineger as no of rows and columns are same
int i , j ;
int nsp = m-1 ;//Number of Spaces in rows
int nst = 1 ; //Number of stars in rows

//here we take 2 variables to prin t space and stars in every rows

    for(i=1;i<=m;i++){ //rows
        for(j=1;j<=nsp;j++){ //Spaces
            printf("  ") ;
            }
        for(j=1;j<=nst;j++){
            printf("%d ",j);//replace with * for only * pattern
        }
        nsp--;
        nst+=2;

        printf("\n");
    }
    return 0;
}

