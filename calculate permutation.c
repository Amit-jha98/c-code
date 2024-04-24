/* this code is use to calculate when order matter (i.e. p(n/r)) */
#include<stdio.h>
int Fact();
int main()
{
int n,r;
float result;
printf("\n Enter the value of n: ");
scanf("%d",&n);
printf("\n Enter the value of r: ");
scanf("%d",&r);
result=(float)Fact(n)/Fact(r);
printf("\n p(n/r): p(%d)/(%d)=%.2f",n,r,result);
return 0;
}

int Fact (int num)
{
int f=1,i;
for(i=num;i>=1;i--)

f=f*i;
return f;
}