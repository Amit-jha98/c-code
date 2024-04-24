#include<stdio.h>
#define ANSI_COLOR_CYAN "\x1b[36m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_CRESET "\x1b[0m"
int main()
{
int marks;
char grade;
printf(ANSI_COLOR_CYAN "Enter Your Marks\n");
scanf("%d",&marks);
if(marks>=101);
grade='N';
else
if(marks>=90);
grade='O';
else
if(marks>=80);
grade='A';
else
if(marks>=70);
grade='B';
else
if(marks>=60);
grade='C';
else
if(marks>=50);
grade='D';
else
if(marks>=40);
grade='E';
else
grade='F';
switch(grade)
{
case 'N' : printf(ANSI_COLOR_CYAN "\nInvalide Grade",grade);
break;
case 'O' : printf(ANSI_COLOR_GREEN "Excellent\nYour Grade Is %c",grade);
break;
case 'A' : printf(ANSI_COLOR_GREEN "Very Good\nYour Grade Is %c",grade);
break;
case 'B' : printf(ANSI_COLOR_GREEN "Good\nYour Grade Is %c",grade);
break;
case 'C' : printf(ANSI_COLOR_YELLOW "Ok\nYour Grade Is %c",grade);
break;
case 'D' : printf(ANSI_COLOR_YELLOW "Not so Good\nYour Grade Is %c",grade);
break;
case 'E' : printf(ANSI_COLOR_YELLOW "Need Improvement\nYour Grade Is %c",grade);
break;
case 'F' : printf(ANSI_COLOR_RED "Failed\nYour Grade Is %c",grade);
break;
}
printf(ANSI_COLOR_CRESET "\n\nHAVE A NICE DAY\n\n");
return 0;
}