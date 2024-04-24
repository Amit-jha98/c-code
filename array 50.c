#include<stdio.h>
int main ()
{
int i,a[50];
for(i=1;i<=50;i++)
{
a[i]=i*2;
printf("Element at index %d is : %d\n",i,a[i]);
}
return 0;
}