#include<stdio.h>
#include<stdbool.h>
//library to use standard boolian

int main(){

int n;
    printf("n:");
    scanf("%d",&n);

//int check=1;//1 means prime 0 means composite
bool flag = true; //only to check/flag variable is true or false
for(int i=2; i<=n/2; i++){
        if(n%i==0){
        //check = 0;//means value of check became 0 ->if n is divisible ,so check = 0 its composite
        flag = false;
           break;
        }
    }

        if(n==1)  printf("Not Prime nor Composite");
        //else if(check==1) printf("%d is Prime Number",n);
        else if(flag==true) printf("%d is Prime Number",n);
        else printf("%d is composite",n);





 return 0;
}

