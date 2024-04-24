#include<stdio.h>
#define ANSI_COLOR_ "\x1b[33m"
int main()
{
float u,a,t,s;
printf(ANSI_COLOR_ "enter the value of average velocity,acceleration and time");
scanf("%f%f%f",&u,&a,&t);
s=(u*t)*0.5*(a)*(t*t);
printf("average velocity=%f \n",u);
printf("acceleration=%f \n",a);
printf("time=%f \n",t);
printf("average distance=%f \n",s);
return 1;
}
