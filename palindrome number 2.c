#include <stdio.h>
void main () 
{
int num,t,rev,rem;
printf("Enter any number");
scanf("%d",&num);
t=num;
for(rev=0;num>0;) 
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
if(rev==t) 
{
printf("It is a palindrome number");
}
else
{
printf("It is not a palindrome number");
}
}