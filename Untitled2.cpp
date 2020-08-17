#include <stdio.h>
 
int main()
{
   int n, r = 0;
 
   printf("enter a number");
   scanf("%d",&n);
   
   while (n!=0)
   {
   	r=r*10+n%10;
   	n=n/10;
   }
   
   if (n==r)
   
   printf("The number is palindrome");
   else
   printf("the number is not palindrome");
   return 0;
}
