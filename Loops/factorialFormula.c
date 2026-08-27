#include<stdio.h>
int main(){

int n;
    printf("n:");
    scanf("%d",&n);

int f = 1;//factor or product(*)

for(int i=1 ; i<=n ; i++){
    f = f * i;
printf("factor of %d is : %d\n",i,f);
}

return 0;
}
