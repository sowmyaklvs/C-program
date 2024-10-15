#include <math.h>
void main () 
{
float u,bill;
printf("Input the electricity units:");
scanf("%f",&u);
if (u<=50)
{
  bill=u*0.5;
  printf("The electricity bill is %f",bill);
}
else if (50<u<=150) 
{
  bill=(50*0.5)+((u-50)*0.75) ;
  printf("The electricity bill is %f",bill);
}
else if (150<u<=250) 
{
  bill=(50*0.50)+(100*0.75)+((u-150)*1.20) ;
  printf("The electricity bill is %f",bill);
}
else
{
  bill=(50*0.5)+(100*0.75)+(100*1.20)+((u-250)*1.5) ;
  printf("The electricity bill is %f",bill);
}
}  