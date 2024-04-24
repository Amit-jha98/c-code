#include<stdio.h>
#define ANSI_COLOR_ "\x1b[32m"
int main()
{
int marks;
char grade;
printf(ANSI_COLOR_ "Enter Mark :");
scanf("%d",&marks);
if(marks>=90)
grade='O';
else if(marks>=80)
grade='E';
else if(marks>=70)
grade='A';
else if(marks>=60)
grade='b';
else if(marks>=50)
grade='C';
else if(marks>=40)
grade='D';
else
grade='f';
printf("\nYour Grade is :%c",grade);
return 0;
}