#include<stdio.h>
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_RED "\x1b[31m"
int main()
{
int marks;
char grade,grade1,grade2;
printf(ANSI_COLOR_BLUE "Enter Mark");
scanf("%d",&marks);
switch(marks)
if(marks>=90)
grade='o';
else 
if(marks>=80)
grade='A';
else
if(marks>=70)
grade='B'; 
else
if(marks>=60)
grade1='c';
else
if(marks>=50)
grade='D';
else
if(marks>=40)
grade='E';
else
if(marks<=39)
grade2='F';
{
case 1 :printf(ANSI_COLOR_GREEN "YOUR GRADE=%c",grade);
break;
case 2 :printf(ANSI_COLOR_YELLOW "\nYOUR GRADE=%c",grade1);
break;
case 3 :printf(ANSI_COLOR_RED "\nYOUR GRADE=%c",grade2);
}
return 0;
}