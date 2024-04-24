#include<stdio.h>
int main()
{
int a,b,c=0;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
printf("value of a is %d\nvalue of b is %d\n",a,b);
c=a;
a=b;
b=c;
printf("After swapping value of \na is %d \nb is %d",a,b);
return 0;
}