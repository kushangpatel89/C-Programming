#include<stdio.h>
int main(){

//infinite loop 1
//int i;
//    while(i=10) {
//    printf("%d ",i);
//    i++;
//    }
//infinite loop 2
//    while(12<13) {
//    printf("kushang Patel\n");
//
//    }

//equation patern
//    int x=4 , y=3 ,z;
//        z = x-- -y; //x-- is post increment so x=4 first
//        printf("%d %d %d ",x,y,z); //here x-- is 4-1=1

//equation patern
//    int x=4 , y=0 ,z;
//    while(x>=0){
//        x--;
//        y++;
//
//        if(x==y) continue;
//        else printf("\n %d %d ",x,y);
//    }

//equation patern
    int x=4 , y=0 ,z;
    while(x>=0){

    if(x==y) break;
    else printf("\n %d %d ",x,y);
        x--;
        y++;
    }


//infinite loop types
//int i=10;
//    while(i=20) {
//    printf("\nA Computer Bluff ");
//
//    }

 return 0;
}
