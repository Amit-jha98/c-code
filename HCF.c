#include<stdio.h>
int main ()
{
int a,b,result;
scanf("%d%d",&a,&b);
result=a<b?a:b;
while(1)
{
if(a%result==0 && b%result==0)
{
break;
}

else

result--;
}
printf("HCF=%d",result);
return 0;
}
