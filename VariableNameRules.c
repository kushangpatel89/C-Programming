#include<stdio.h>
int main(){

//variable naming Rules

//1.....
//perticular words like int,floar,for,while,double,else etc are data ttpe codes which cant use as variable names
//like int int,int float,int for etc
//also capitalization is mandatory so we can use int Int,float Float,int While,int IF etc are allowed
int Int=5;//allowed
//int int=5 not allowed
printf("%d\n",Int);//allowed

//2.....
//variables can starts from alphabet,$ and underscore _
//start with numbers not allowed
//int 1x,2y etc not allowed
int x1=6;//allowed
int $x=7;//allowed
int _x=8;//allowed
printf("%d\n",x1);
printf("%d\n",$x);
printf("%d\n",_x);

//3.....
//start with special character except $ _ not allowed
//special char like !@#%&*()<>,.?/:;"'{}[} /*-+ not allowed
//int +x ,int x# ,int &x x&  are not allowd

//4.....
//comas and blanks are not allowed
//int x,y int x y not allowed
//int xy is allowed
int xy=9;//allowed
int yx=10;//allowed
printf("%d\n",xy);
printf("%d\n",yx);

return 0;
}
