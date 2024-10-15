#include <math.h>
int main()
{
int x,y,a,b;
printf("enter the values of x,y,a and b");
scanf("%d %d %d %d",&x,&y,&a,&b);
while(x<=y)
 {
 if(x%a==0&&x%b==0)
 printf("\nthe number %d is divisible by both %d and %d and gives:%d and %d",x,a,b,x/a,x/b);
 else if(x%a==0&&x%b!=0)
 printf("\nthe number %d is divisible by %d and gives %d but not divisible by %d",x,a,x/a,b);
 else if(x%a!=0&&x%b==0)
 printf("\nthe number %d is not divisible by %d but divisible by %d and gives %d",x,a,b,x/b);
 else
 printf("\nthe number %d is not divisible by both %d and %d",x,a,b);
 x++;
 }
}