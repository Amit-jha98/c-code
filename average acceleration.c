#include<stdio.h>
#define ANSI_COLOR_ "\x1b[33m"
int main ()
{
float v1,v2,t1,t2,a;
printf(ANSI_COLOR_ "enter the initial and finel value of  velocity and time");
scanf("%f%f%f%f",v1,v2,t1,t2);
a=v2-v1/t2-t1 ;
printf("average accelartion=%f",a);
return 0;
}