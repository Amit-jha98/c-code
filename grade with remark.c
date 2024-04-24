#include<stdio.h>
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_CRESET "\x1b[0m"
#define ANSI_COLOR_CRESET "\x1b[0m"
int main()
{
int mark;
char grade;
printf(ANSI_COLOR_BLUE "enter mark");
scanf("%d",&mark);
if(mark>=101)
grade='N';
else
if(mark>=90)
grade='O';
else
if(mark>=80)
grade='E';
else
if(mark>=70)
grade='A';
else
if(mark>=60)
grade='B';
else
if(mark>=50)
grade='C';
else
if(mark>=40)
grade='D';
else
grade='F';
switch(grade)
{
case 'N' : printf(ANSI_COLOR_CRESET"\nInvalid Grade");
break;
case 'O' :printf(ANSI_COLOR_GREEN "Excellent\nYOUR GRADE=%c",grade);
break;
case 'E' :printf(ANSI_COLOR_GREEN "Very Good\nYOUR GRADE=%c",grade);
break;
case 'A' :printf(ANSI_COLOR_GREEN "Good\nYOUR GRADE=%c",grade);
break;
case 'B' :printf(ANSI_COLOR_YELLOW "Good-work hard\nYOUR GRADE=%c",grade);
break;
case 'C' :printf(ANSI_COLOR_YELLOW "Ok\nYOUR GRADE=%c",grade);
break;
case 'D' :printf(ANSI_COLOR_YELLOW "Not So Good\nYOUR GRADE=%c",grade);
break;
case 'F' :printf(ANSI_COLOR_RED "Very Bad,failed\nYOUR GRADE=%c",grade);
}
printf(ANSI_COLOR_CRESET"\n\nTHANKS (-:\n");
return 0;
}