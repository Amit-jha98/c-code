#include<stdio.h>
int main()
{
int i,n;
int flag=0;
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
printf("N  is not prime");
flag=1;
break;
}}
if(flag==0)
{
printf("N is prime");
}
return 0;
}