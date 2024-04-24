#include<stdio.h>
#include<stdlib.h>
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
ptr =(struct student *)malloc(sizeof(struct student));
printf("\n Enter the data for the student ");
printf("\n Roll No.");
scanf("%d",&ptr->roll_no);
printf("\n Name: ");
scanf("%s",ptr->name);
printf("\n Course: ");
scanf("%s",ptr->course);
printf(" Fees: ");
scanf("%d",&ptr->fees);
display(ptr);
return 0;
}
void display(struct student *ptr)
{
  printf("\n Detail Of Student");
  printf("\n Roll Number=%d",ptr->roll_no);
  printf("\n Name=%s",ptr->name);
  printf("\n Course =%s",ptr->course);
  printf("\n Fees =%d",ptr->fees);
};

