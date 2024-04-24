#include<stdio.h>
int main ()
{
char i,k,j;
int n;
printf("enter number of row and column(N)");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=n;j>i;j--)
printf("%d",j);
printf("\n");
for(k=0;k<i;k++)
printf(" ");
}
return 0;
}