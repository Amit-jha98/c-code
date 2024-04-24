#include<stdio.h>
#define ANSI_COLOR_ "\x1b[31m"
int main()
{
float s,a,b,c,d;
printf(ANSI_COLOR_ "enter the value of a,b,c,d");
scanf("%f%f%f%f",&a,&b,&c,&d);
 s=a/b*c/d ;
printf("fractional Multiplication=%f",s);
return 0;
}