#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
printf("Enter the word(string)");
getchar("%s",str);
printf("\n Length of str is: %d",strlen(str));
return 0;
}