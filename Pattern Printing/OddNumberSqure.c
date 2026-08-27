#include<stdio.h>
int main(){

int m;//rows

    printf("Enter a Number of Rows:");
    scanf("%d",&m);
 //for solid square take only one ineger as no of rows and columns are same
int i , j;
    for(i=1;i<=m;i++){ //rows
        int a = 2;

        for(j=1;j<=i;j++){ //columns
            printf("%d ",a);
            a += 2; //store value in 'a' and print value of 'a'

        }
        printf("\n");
    }
return 0;
}
