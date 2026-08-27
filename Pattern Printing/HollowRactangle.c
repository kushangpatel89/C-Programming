#include<stdio.h>
int main(){

int m;//rows
int n;//columns


    printf("Enter a Number of Rows:");
    scanf("%d",&m);
    printf("Enter a Number of Columns:");
    scanf("%d",&n);
 //for solid square take only one ineger as no of rows and columns are same
int i , j ;

    for(i=1;i<=m;i++){ //rows
        for(j=1;j<=n;j++){ //columns
            if(i==1 || i==m || j==1 || j==n) printf("* ");
            else printf("  ");// # replace with space for only * pattern

        }
        printf("\n");
    }
    return 0;
}

