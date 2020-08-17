#include <stdio.h>    
int main()  
 {  
   int LA[6],i;    
   printf("Enter The Elements in The Array:\n");  
   for(i=0;i<6;i++)
   {  
     scanf("%d",&LA[i]);  
     printf("\n");  
   }   
   for(i=0;i<6;i++)
   {  
     printf("\n LA[%d] = %d:",i,LA[i]);  
   }  
   return 0;  
 } 
