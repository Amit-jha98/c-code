#include<stdio.h>
#define ANSI_COLOR_ "\x1b[35m"
int main()
{
int year;
printf(ANSI_COLOR_ "enter the year : ");
scanf("%d",&year);
if(year%100==0)
{
if(year%400==0)
printf("it is a leap year");
else
printf("it is not a leap year");
}
else
{
if(year%4==0)
printf("it is a leap year");
else
printf("it is not a leap year");
}
return 0;
}

