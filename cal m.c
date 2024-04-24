#include<stdio.h>
#include<math.h>
int main ()
{
 double ma,mb;
 double mu;
 double vf,k;
 double c=3*pow(10,8);
 printf("\t\t CHEmistry CALCULATOR FOR REDUCE MASS, VIBRATIONAL FREQUENCY AND FORCE CONSTANT OF TWO ATOMS\n\n\n");
 
 (read);

 printf("\nEnter the value of mass no of both the element in amu.\n");
 scanf("%Lf%Lf",&ma,&mb);
 double mu1=((ma*mb)/(ma+mb))*1.66;
 mu=mu1*pow(10,-27);
 
   if(ma==0||mb==0)
    {
     printf("\tTo calculate any of the value here it needs to be have some mass for both the element CALCULATION DENIED\n\n\n");
    }
   else 
    {
      printf("\nEnter the value of vibrational frequency in per meter(if to find then enter 0)=");
      scanf("%Lf",&vf);
      printf("\nEnter the value of force constant in newton per meter(if to find then enter 0)=");
      scanf("%Lf",&k);

      if(vf==0 && k==0)
        {
          printf("\n\tReduce mass=%Lf *(10^)-27 kg",mu1);
          printf("\n\tInsufficient data for the calculation of vibrational frequency and force constant.\n\n\n");
        }
      else
        {
          if(vf==0 && k!=0)
           {
             vf=(1/(2*3.14*c))*(sqrt(k/mu));
             printf("\n\tReduce mass=%Lf *(10^)-27 kg",mu1);
	     printf("\n\tVibrational frequency=%Lf per meter",vf);
             printf("\n\tForce constant=%Lf newton per meter\n\n\n",k);
           }
          else
           {
            if(k==0 && vf!=0)
             {
               k=vf*vf*4*3.14*3.14*c*c*mu;
               printf("\n\tReduce mass=%Lf *(10^)-27 kg",mu1);
	       printf("\n\tVibrational frequency=%Lf per meter",vf);
	       printf("\n\tForce constant=%Lf newton per meter\n\n\n",k);
             }
            else
             {
               if(k!=0 && vf!=0)
                {
                  printf("\n\tReduce mass=%Lf *(10^)-27 kg",mu1); 
                  printf("\n\tValues of vibrational frequency and force constant are already given\n\n\n");
                }
             }
           }
         }
      }
 goto (read);
 
 return 0;

}