#include<stdio.h>
int main()
{
int flag=0;
int i;
int n;
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
{
if(flag==0)
{
printf("number is prime");
}
else
{
printf("number is not prime");
}
}
return 0;
}