#include<stdio.h>
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_RESET "\x1b[0m"
int main()
{
char i,j,k;
int n;
printf("Enter value of N");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
for(k=n;k>=i;k--)
printf(" ");
for(j=1;j<=i;j++)
printf("%d",j);
printf("\n");
}
return 0;
}