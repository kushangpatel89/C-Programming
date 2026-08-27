#include<stdio.h>
int main(){

int m;//rows


    printf("Enter a Number of Rows:");
    scanf("%d",&m);


int i , j ;
    for(i=1;i<=m;i++){ //rows
        for(j=1;j<=i;j++){ //columns
            if((i+j)%2==0) printf("1 ");
            else printf("0 "); //print inside loop number

        }
        printf("\n");
    }
    return 0;
}

