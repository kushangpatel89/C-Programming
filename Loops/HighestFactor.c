#include<stdio.h>
int main(){

int n;
int hf;

    printf("n:");
    scanf("%d",&n);
//HF is any highrst divisible number ir if n=24 hf=12 , n=100 hf=50
//    for(int i=1;i<=n-1;i++){
//        if(n%i==0) hf = i;

//Run reverse loop from n to 1
//it check loop less times then method 1
for(int i=n-1;i>=1;i--){
        if(n%i==0){
           hf = i;
           break;

        }

   }
   printf("Highest Factor is %d",hf);

 return 0;
}

