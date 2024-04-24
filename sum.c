#include<stdio.h>
int main()
{
int i,n;
int sum=0;
printf("enter value of N");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("sum=%d",sum);
return 0;
}