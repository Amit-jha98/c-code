#incude<stdio.h>
#define ANSI_COLOR_ "\x1b[32m"
int main()
{
int pur_amt;
float discount,pay_amt,total_d;
printf(ANSI_COLOR_ "Enter purchase amount");
scanf("%d",pur_amt);
if(pur_amt>5000)
discount=pur_amt*0.l;
pay_amt=pur_amt-discount;
total_d=pur_amt-pay_amt;
printf("total discount=%f\n",total_d);
printf("net payeble amount=%f",pay_amt);
return 0;
}
