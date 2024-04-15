#include<stdio.h>
#include<stdlib.h>
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_white "\x1b[0m"
typedef struct student
{
  int roll_no;
  char name[20];
  char course[20];
  int fees;
};

void display(struct student *);
int main()
{
struct student *ptr;
ptr=(struct student *)malloc(sizeof(struct student));
printf("\n Enter the data of the student");
printf("\n ROLL NO.: ");
scanf("%d",&ptr->roll_no);
printf("\n NAME: ");
scanf("%s",ptr->name);
printf("\n COURSE: ");
scanf("%s",ptr->course);
printf("\n Fees: ");
scanf("%d",&ptr->fees);
display(ptr);
return 0;
}
  void display(struct student *ptr)
{
  printf("\n DETAILS OF STUDENT");
  printf("\n ROLL NUMBER =%d" ANSI_COLOR_RED, ptr->roll_no);
  printf(ANSI_COLOR_white "\n NAME =%s" ANSI_COLOR_RED, ptr->name);
  printf(ANSI_COLOR_white "\n COURSE =%s" ANSI_COLOR_RED, ptr->course);
  printf(ANSI_COLOR_white "\n FEES =%d" ANSI_COLOR_RED, ptr->fees);
}