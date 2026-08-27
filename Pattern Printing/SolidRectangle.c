#include<stdio.h>
int main(){

int m;//rows
int n;//coloums

    printf("Enter a Number of Rows:");
    scanf("%d",&m);
    printf("Enter a Number of Columns:");
    scanf("%d",&n);

int i , j;
    for(i=1;i<=m;i++){ //rows
        for(j=1;j<=n;j++){ //columns
            printf("*");
        }
        printf("\n");
    }



return 0;
}
