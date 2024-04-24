#include<stdio.h>
int main()
{
int a,k,j,n;
printf("Enter number of row and column(N)");
scanf("%d",&n);
for(a=0;a<n;a++)
{
for(j=n;j<a;j++)
printf("%d",a);
printf("\n");
for(k=0;k>a;k++)
printf(" ");
}
return 0;
}