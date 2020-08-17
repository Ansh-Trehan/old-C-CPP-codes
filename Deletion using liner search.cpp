#include <stdio.h>
int main()
{
   int array[25],search,c,n;
   printf("Enter the number of elements in array\n");
   scanf("%d",&n);
   printf("Enter %d Elements\n",n);
   for (c=0;c<n;c++)
   scanf("%d",&array[c]);
   printf("Enter the number to search\n");
   scanf("%d",&search);
   for (c=0;c<n;c++)
   {
    if (array[c]==search)
    {
    printf("%d is present at location %d.\n",search,c+1);
    break;
    }
   }
   if (c==n)
   printf("%d is not present in array.\n",search);
    printf("Enter The Location Where You Want To Delete Element\n");
    scanf("%d",&search);    
    if(search>=n+1)    
    printf("Deletion Can`t Be Done!!!!.\n");    
    else
    {    
    for(c=search-1;c<n-1;c++) 
    array[c]=array[c+1];            
    printf("Final Result Of The Array\n");    
    for(c=0;c<n-1;c++)        
    printf("%d\n",array[c]);        
    }
	return 0;    
}
