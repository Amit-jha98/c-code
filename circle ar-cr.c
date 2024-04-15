#include<stdio.h>
int main()
{
float r,ar,cr;
printf("enter radius of circle");
scanf("%f",&r);
ar=3.14*(r*r);
cr=2*3.14*r;
printf("Area of circle is %f\nCircumference of circle is %f",ar,cr);
return 0;
}