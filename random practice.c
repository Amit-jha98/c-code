#include<stdio.h>
int mian()
{
int a=2,b=3,c=4;
if(c!=100)
a=10;
else
b=10;
if(a+b>10)
c=12;
a=20;
b=++c;
printf("\n a=%d \t b=%d \t c=%d",a,b,c);
return 0;
}