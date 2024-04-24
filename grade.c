#include<stdio.h>
#define ANSI_COLORT_YELLOW "\x1b[33m"
#define ANSI_COLOR_RED "\x1b[31m"
int main()
{
int mark;
char grade;
printf(ANSI_COLOR_YELLOW  "Enter your marks");
scaanf("%d",&mark);
if(mark>=101)
grade='N';
else
if(mark>=90)
grade='O';
else
if(mark>=80)
grade='A';
else
if(mark>=70)
grade='B';
else
if(mark>=60)
grade='C';
else
if(mark>=50)
grade='D';
else
if(mark>=40)
grade='E';
else
grade='F';
switch(grade)
{
case 'N' : printf("Enter valid mark");
break;
case 'O' : printf("Exelent your grade is %d",grade);
break;
case 'A' : printf("Very Good your grade is %d",grade);
break;
case 'B' : printf("Good your grade is %d",grade);
break;
case 'C' : printf("Nice your grade is %d",grade);
break;
case 'D' : printf("Not bad your grade is %d",grade);
break;
case 'E' : printf(ANSI_COLOR_RED"Failed",mark);
break;
}
return 0;    
}