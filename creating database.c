#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ANSI_COLOR_PURPLE "\x1b[35m"
struct Person {
char name[50];
int age;
char address[100];
};

void addData(FILE *file)
{
struct Person person;
printf(ANSI_COLOR_PURPLE "Enter name");
scanf("%s",person.name);
printf("Enter age");
scanf("%d",&person.age);
printf("Enter address");
scanf("%s",&person.address);
fwrite(&person,sizeof(struct Person),1,file);
printf("Data added succefully. \n");
}
void searchByName(FILE *file)
{
struct Person person;
char searchName[50];
fseek(file,0,SEEK_SET);
while(fread(&person,sizeof(struct Person),1,file)==1)
{
if(strcmp(person.name,searchName)==0)
{
printf("Found Entery");
printf("Name : %s\n",person.name);
printf("Age : %d\n",person.age);
printf("Address : %s\n",person.address);
return;
}
}
printf("Name Not Found In The Database. \n");
}
int main()
{
FILE *file = fopen("data.dat","ab+");
if(file==NULL)
{
perror("Error Opening File");
return 1;
}
int choice;
do{
printf("\n1. Add data\n");
printf("2. search by name\n");
printf("3. Exit\n");
printf("Enter Your Choice (1/2/3): ");
scanf("%d",&choice);
switch(choice)
{
case 1 : addData(file);
break;
case 2 : searchByName(file);
break;
case 3 : printf("Exiting the program.\n");
default:
printf("Invalid choice. please enter 1,2 or 3. \n");
}
}
while(choice !=3);
fclose(file);
return 0;
}
