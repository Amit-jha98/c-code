#include<stdio.h>
#define ANSI_COLOR_YELLOW "\x1b[33m"
int main()
{
int ar1[3] [3], ar2[3][3],ar3[3][3],i,j,k,t;
printf(ANSI_COLOR_YELLOW "\nEnter the element of 1st matrix:-\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("Enter element[%d][%d] : ",i,j);
scanf("%d",&ar1[i][j]);
}
}
printf("\nEnter the element of 2nd matrix:-\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{ printf("Enter element[%d][%d] : ",i,j);
scanf("%d",&ar2[i][j]);
}
}
printf("\n\n1st matrix:-\n");
for(i=0;i<3;i++)
{ for(j=0;j<3;j++)
printf("%d\t",ar1[i][j]);
printf("\n");
}
printf("\n\n2nd matrix:-\n");
for(i=0;i<3;i++)
{ for(j=0;j<3;j++)
printf("%d\t",ar2[i][j]);
printf("\n");
}
for(i=0;i<3;i++)
{ ar3[i][j]=0;
for(k=0;k<3;k++)
ar3[i][j]= ar[i][j]+ar1[i][k] * ar2[k][j];
}
printf("\n\nAfter multiplication the resultant matrix is:-\n");
for(i=0;i<3;i++)
{ for(j=0;j<3;j++)
printf("%d\t",ar3[i][j]);
printf("\n");
}
return 0;
}
