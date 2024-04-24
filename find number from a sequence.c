#include<stdio.h>
int main()
{
int a[5];
int key;
int mid,low=0,high=4,loc=-1;
for(int i = 0; i < 5; i++) 
{
scanf("%d", &a[i]);
}
scanf("%d",&key);
while(low<=high)
{
mid=(low+high)/2;
if(key==a[mid])
{
loc=mid;
break;
}
else if(key<a[mid])
{
high=mid-1;
}
else
{
low=mid+1;
}}
if(loc<0)
{
printf("element does not exist");
}
else
{
printf("element %d exist at location %d",key,loc);
}
return 0;
}