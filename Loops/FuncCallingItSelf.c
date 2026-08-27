#include<stdio.h>
//
//void greet(){
//    printf("Kushang\n");
//    greet();//it runs the loop infinite time
//}
//how to stop infinite loop and run for n times
void greet(int n){
    if(n==0) return;
    printf("Kushang\n");
    greet(n-1);//it runs the loop infinite time
}
int main(){

greet(5);
return 0;
}
