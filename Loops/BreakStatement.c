#include<stdio.h>
int main(){

int n;

    printf("n:");
    scanf("%d",&n);

//for statement for(initialization;condition,increment/decrement){code}
    for(int i=1;i<=n;i++){
    printf("%d ",i);
    if(i==50) break;
    }
 return 0;
}

