#include<stdio.h>
int main(){

int i=12;

//it always runs atleaset once as while condition is at last point
//even if take integer more than 10 it print that int once
//if int tale <=10 it runs as while and for

do{
    printf("%d ",i);
    i++;
} while(i<=10);


 return 0;
}
