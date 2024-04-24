#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
  
  double m1,m2,v,v1,k,u,i,r,b;     //u=temporary veriable
  printf("\t\tchemistry calculator\n");
  int choice;
  printf("\n1. force constant:");
  printf("\n2. reduce mass:");
  printf("\n3. vibrational frequency:");
  printf("\n4. internuclear distance:");
  printf("\n5. moment of inertia:");
  printf("\n6. rotational constant:");
  printf("\n7.wave number(IR):");
  printf("\n8.exit");
  printf("\n\nenter your choice:");
  scanf("%d",&choice);
switch(choice)
{
  case 1:
printf("enter the value of m1 and m2 in(amu)and v1(per meter)");
scanf("%lf%lf%lf",&m1,&m2,&v1);
k=4*3.14*3.14*9*1.66*((m1*m2)/(m1+m2))*v1*v1;
printf("\n force consant(newton per meter)=%1f×10^-11",k);
break;
  case 2:
printf("enter the value of m1 and m2(both m1&m2 in amu)");
scanf("%lf%lf",&m1,&m2);
u=(((m1*m2)/(m1+m2))*1.66);
printf("\n reduce mass(in kg)=%1f×10^-27",u);
break;
  case 3:
printf("enter the value of k(in newton pre meter) and m1 and m2(in amu)");
scanf("%lf%lf%lf",&k,&m1,&m2);
u=sqrt((k*10)/((m1*m2)/(m1+m2)));
v1=(0.159*u)/1.288;
printf("\n vibrational frequency(per sec)=%lf×10^13",v1);
break;
  case 4:
printf("enter the value of mass(in amu) and rotational constant (in m^-1)");
scanf("%lf%lf%lf",&m1,&m2,&b);
r=sqrt(0.16858/(b*((m1*m2)/(m1+m2))));
printf("\n internuclear distance(in m)=%lf*10^-8",r);
break;
  case 5:
printf("enter the value of mass (in amu) and r(in A°)");
scanf("%lf%lf%lf",&m1,&m2,&r);
i=((m1*m2)/(m1+m2))*r*r*1.66;
printf("\n moment of inertia(kg-m^2)=%lf×10^-45",i);
break;
  case 6:
printf("enter the value of mass(in amu) and r (in A°)");
scanf("%lf%lf%lf",&m1,&m2,&r);
b=0.016868/(((m1*m2)/(m1+m2))*r*r);   
printf("\n rotational constant(per m)=%lf×10^3",b);
break;
  case 7:
  printf("enter the value of mass(in amu) and force constant (in N/m)");
  scanf("%lf%lf%lf",&m1,&m2,&k);
  u=sqrt((k*10)/((m1*m2)/(m1+m2)));
  v=(0.159*u)/(1.288*3);
  printf("\n wave number(in Hz)=%lf*10^5",v);
  break;
  case 8:
  exit(0);
  default:
  printf("\n invalid choice");
}
  
return 0;
}