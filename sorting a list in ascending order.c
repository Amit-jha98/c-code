#include<stdio.h>
#include<string.h>
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define SIZE 8
int main()
{
char names[SIZE][30],temp[30];
int i,j;
for(i=0;i<SIZE;i++)
{
printf(ANSI_COLOR_YELLOW "Enter Name%d:",i+1);
fflush(stdin);
gets(names[i]);
}
for(i=1;i<SIZE;i++)
for(j=0;j<SIZE-i;j++)
if(strcmp(names[j],names[j+1])>0)
{
strcpy(temp,names[j]);
strcpy(names[j],names[j+1]);
strcpy(names[j+1],temp);
}
printf("\nList of Names in Ascending order :\n");
for(i=0;i<SIZE;i++)
puts(names[i]);
return 0;
}