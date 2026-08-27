#include<stdio.h>
int main(){

int m;//rows


    printf("Enter a Number of Rows:");
    scanf("%d",&m);
 //for solid square take only one ineger as no of rows and columns are same
int i , j;
    for(i=1;i<=m;i++){ //rows
        for(j=1;j<=m;j++){ //columns
            printf("* ");
        }
        printf("\n");
    }



return 0;
}
