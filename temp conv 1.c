#include <stdio.h>
void main() 
{
float f, c;
int choice;
printf("1.Conversion of temp from fahrenheit to celsius \n");
printf("2,Conversion of temp from celsius to fahrenheit\n");
printf("Enter your choice 1 or 2");
scanf("%d",&choice);
if(choice ==1) 
{
printf("Enter temperature");
scanf("%f",&f);
c = 5*(f-32) /9;
printf("The temperature in celsius is %f",c);
}
else if (choice==2) 
{
printf("Enter temperature");
scanf("%f",&c);
f=(9*c+160)/5;
printf("The temperature in fahrenheit is %f",f);
}
else
printf("invalid choice");
}
