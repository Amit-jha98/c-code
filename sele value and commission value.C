#include<stdio.h>
#define ANSI_COLOR_ "\x1b[33m"
int main()
{
int sales_val;
float com;
printf(ANSI_COLOR_ "Enter sales value :");
scanf("%d",&sales_val);
if(sales_val<5000)
com=sales_val*0.05;
else
if(sales_val<=7500)
com=sales_val*0.1+100;
else
com=sales_val*0.15;
printf("seles value=%d",sales_val);
printf("\nComission=%.2f",com);
return 0;
}