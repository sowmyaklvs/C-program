#include <stdio.h>
void main() 
{
int a,b,c,d;
printf("Enter any four numbers:");
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a>b) 

   if (a>c) 
   
      if (a>d) 
      
        printf("The largest no. is %d",a);
        
      else
      
       printf("The largest no. is %d",d);  
      
   else
   
      if (c>d) 
      
      printf("The largest no is %d",c);
      
      else
      
      printf("The largest no is %d",d);
 
else 
 if (b>c) 
        
      if (b>d) 
         
      printf("The largest no.is %d",b);
          
      else 
          
      printf("The largest no is %d",d);
      
 else
       if (c>d)  
        
        printf("The largest no. is %d",c);
        
        else
        printf("The largest no is %d",d);
       
}