#include<stdio.h>
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_RESET "\x1b[0m"
int main()
{
char i,j;
int n,a;
printf("Enter number between 1 to 26");
scanf("%d",&n);
a=64+n;
if(a>64 && a<=90)
{
for(i=65;i<=a;i++)
{
printf("\n");
for(j=65;j<=i;j++)
printf("%c",j);
}}
else
{
printf(ANSI_COLOR_RED "ENTER NUMBER BETWEEN 1 TO 26"ANSI_COLOR_RESET);
}
return 0;
}