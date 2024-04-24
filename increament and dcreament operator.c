#include<stdio.h>
int main()
{
int i,j,k,p;
i=5;
j=7;
k=3;
p=(i++)*(--k)+(++j)*(++i)+(k--)*(j--);
printf("i=%d\n",i);
printf("j=%d\n",j);
printf("k=%d\n",k);
printf("p=%d",p);
return 0;
}