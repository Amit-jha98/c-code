#include<stdio.h>
int main()
{
int a,b,c,max;
printf("enter value of three number");
scanf("%d%d%d",&a,&b,&c);
max=a>b?(a>c?a:c):(b>c?b:c);
printf("Greatest number is %d",max);
return 0;
}