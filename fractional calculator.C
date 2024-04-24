#include<stdio.h>
#define ANSI_COLOR_ "\x1b[33m"
int main()
{
float A,M,s,a,b,c,d;
printf(ANSI_COLOR_ "enter the value of a,b,c,d");
scanf("%f%f%f%f",&a,&b,&c,&d);
A=a/b+c/d ;
s=a/b-c/d ;
M=a/b*c/d ;
printf("fractional addition=%f\n",A);
printf("fractional substraction=%f\n",s);
printf("fractional multiplication=%f\n",M);
return 0;
}