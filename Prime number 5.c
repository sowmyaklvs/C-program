# include <stdio.h>
void main () 
{
int num,i,count=0;
printf("Enter a number");
scanf("%d",&num);
for(i=1;i<=num;i++) 
{
if(num%i==0)
count++;
}
if(count ==2) 
printf("The given no is prime number");
else
printf("The given no is not a prime number");
}