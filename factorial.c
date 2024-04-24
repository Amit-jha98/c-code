#include<stdio.h>
int fact(int);
int main ()
{
int n,c,r;
scanf("%d%d",&n,&r);
c=fact(n)/fact(r)*fact(n-r);
printf("%d",c);
return 0;
}
int fact(int c)
{
int i;
int result=1;
for(i=1;i<=c;i++)
{
result=result*i;
}
return result;
}