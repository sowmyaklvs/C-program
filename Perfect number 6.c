#include <stdio.h>
void main() 
{
int i,sum=0,num;
printf("Enter any number");
scanf("%d",&num);
for(i=1;i<num;i++) 
{
 if(num%i==0) 
 {
  sum=sum+i;
 }
}
if(sum==num) 
printf("The given number is a Perfect number");
else
printf("The given number is not a Perfect number");
}