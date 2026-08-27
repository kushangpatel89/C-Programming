#include<stdio.h>
int main(){

int n;//rows


    printf("Enter a Number of Rows:");
    scanf("%d",&n);
 //for solid square take only one ineger as no of rows and columns are same
int i , j;
    for(i=1;i<=n;i++){ //rows
        for(j=1;j<=(n+1)-i;j++){ //columns

        //try some patterns
            printf("%d ",j); //1 2 3 4
            //printf("* ",j);//****
            //printf("%d ",i);//1 1 1 1
            //printf("%c ",j+64);//A B C D
            //printf("%c ",i+64);/A A A A
        }
        printf("\n");
    }
    return 0;
}
