#include<stdio.h>
int main(){

int n;//columns

    printf("Enter a Number of Columns:");
    scanf("%d",&n);
 //for solid square take only one ineger as no of rows and columns are same
int i , j ;
int min=0;
    for(i=1;i<=2*n-1;i++){ //rows
        for(j=1;j<=2*n-1;j++){ //columns
    int a=i, b=j;
        if(i>n) a = 2*n - i; //change value of a by reverse order from n
        if(j>n) b = 2*n - j;
      if(a<b) min=a;
      else min=b;
      printf("%d ",n+1-min); // print the minimum value between a and b or max=n+1-min

        }
        printf("\n");
    }
    return 0;
}
