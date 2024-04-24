#include<stdio.h>
int max(int num1, int num2, int num3) {
    int result;
    if(num1>=num2 && num1>num3)
 {
    result=num1;
}
else if(num2>=num1 && num2>=num3)
{
    result=num2;
}
else
{
    result=num3;
}
return result;
}
int main (){
    int num1,num2,num3,maximum;
    printf("Enter 3 Number: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    maximum=max(num1,num2,num3);
    printf("Max number is %d", maximum);
return 0;
}