#include<stdio.h>
int main()
{
int a,b;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("value of a is %d\nvalue of a is %d",a,b);
return 0;
}