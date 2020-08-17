#include <stdio.h>
int main()
{
    int array[25],position,c,n;    
    printf("Enter The Number of Elements You Want to Have In An Array\n");
    scanf("%d",&n);    
    printf("Enter %d elements\n", n);    
    for(c=0;c<n;c++)
    scanf("%d",&array[c]);    
    printf("Enter The Location Where You Want To Delete Element\n");
    scanf("%d",&position);    
    if(position>=n+1)    
    printf("Deletion Can`t Be Done!!!!.\n");    
    else
    {    
    for(c=position-1;c<n-1;c++) 
    array[c]=array[c+1];            
    printf("Final Result Of The Array\n");    
    for(c=0;c<n-1;c++)        
    printf("%d\n",array[c]);        
    }    
    return 0;
}
