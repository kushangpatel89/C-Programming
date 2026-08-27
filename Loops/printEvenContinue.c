#include<stdio.h>
int main(){

//method 1
//    for(int i=1;i<=100;i++){
//    if(i%2==0)
//        printf("%d ",i);
//    }
 //method 2
// for(int i=2;i<=100; i= i+2){
//  printf("%d ",i);
// }

//method 3 using continue
for(int i=1;i<=100;i++){
        if(i%2==0) continue;//continue statenebt skip the number if condioun is true ie odd numbers
        printf("%d ",i);//print only when condition is false ie even number
    }
 return 0;
}
