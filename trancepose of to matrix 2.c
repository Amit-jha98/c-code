#include<stdio.h>
#define ANSI_COLOR_CYAN "\x1b[36m"
int main ()
{
int matrix[3][3],i=0,j=0,t;
printf(ANSI_COLOR_CYAN "\nEnter the element of a Matrix:-\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{ 
printf("Enter element[%d][%d] :");
scanf("%d",&matrix[i][j]);
}
}
printf("\nOriginal Matrix:-\n");
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{ 
printf("%d\t",matrix[i][j]);
printf("\n");
}
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{ 
t=matrix[i][j];
matrix[i][j]=matrix[j][i];
matrix[j][i]=t;
}
printf("\n\nTranspose of the Matrix:-");
for(i=0;i<3;i++)
{ 
for(j=0;j<3;j++)
printf("%d\t",matrix[i][j]);
printf("\n");
    }
return 0;
}