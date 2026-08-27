#include<stdio.h>
int main(){

    int n;
    printf("Enter Number:");
    scanf("%d",&n);
//Method 1 AP formula
//in this method we use a print value of i

//AP- 1 3 5 7 9 11 13....n terms
//Formula for Arithmetic Progression AP an=a1+ (n-1)d
//a1=starting Number , d=diffrence

//  for(int i = 1; i <= (2*n)-1; i=i+2) {
//        printf("%d ", i);
//    }

//AP- 4 7 10 13 16 19....n terms

//Method 2
//here we take another int to print value a

int a=1;
    for(int i=0;i<n;i++){
       printf("%d ",a);
       a = a + 2;
    }

 return 0;
}
