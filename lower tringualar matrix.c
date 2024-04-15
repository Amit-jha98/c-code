#include<stdio.h>
int main ()
{
int i,j;
int k=1;
for(i=1;i<=4;i++)
{
for(j=1;j<=4;j++)
{
if(j>=i)
{
printf("%d",k);
k++;
}
else
{
printf("  ");
}}
printf("\n");
}
return 0;
}