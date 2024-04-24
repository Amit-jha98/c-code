#include<stdio.h>
#define ANSI_COLOR_ "\x1b[33m"
int main()
{
printf(ANSI_COLOR_ "enter the value of a and b");
float a,b,e,f,g;
scanf("%f%f",&a,&b);
e=(a*a)+(b*b)+(2*a*b);
f=(a*a)+(b*b)-(2*a*b);
g=(a*a*a)+(b*b*b)+(3*a*a*b)+(3*a*b*b);
printf("(a+b) whole square=%f\n",e);
printf("(a-b) whole square=%f\n",f);
printf("(a+b) whole cube=%f\n",g);

return 0;
}