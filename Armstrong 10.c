#include<stdio.h>
#include<math.h>
int main()
{
 int r,i,n,c=0,sum=0;
  printf("enter  the number:");
  scanf("%d",&n);
  i=n;
  for(c=0;n>0;)
  {
  n=n/10;
  c=c+1;
  }
  n=i;
  for(;i>0;i=i/10)
  {
   r=i%10;
   sum=sum+pow(r,c);
  }
  if(sum==n)
  printf ("given number is Armstrong number");
  else
  printf("given number is not a armstrong number");
 }