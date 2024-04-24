#include<stdio.h>
int main()
{
int marks[50],i,index;
int group[10]={0};
printf("\n Enter the mark of 10 students :\n");
for(i=0;i<10;i++)
{
printf("\nMARKS[%d]=",i);
scanf("%d",&marks[i]);
++group[(int)(marks[i])/10];
}
printf("\n\n *************************");
i=0;
printf("\n\n FREQUENCY HISTOGRAM");
for(index=0;index<10;index++)
{
printf("\n GREOUP %d|",index);
for(i=0;i<group[index];i++)
printf("*");
}
return 0;
}