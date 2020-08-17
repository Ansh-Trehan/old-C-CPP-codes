#include<stdio.h>
int main()
{
    int array[25],position,c,n,value;
    printf("Enter The Number of Elements You Wish to Have In An Array\n");
    scanf("%d",&n);
    printf("Enter %d elements\n", n);
    for(c=0;c<n;c++)    
    scanf("%d",&array[c]);
    printf("Enter The Location Where You Wish To Insert An Element\n");
    scanf("%d",&position);
    printf("Enter The Value To Insert\n");
    scanf("%d",&value);
    for(c=n-1;c>=position-1;c--)    
	array[c+1]=array[c];
    array[position-1]=value;
    printf("Final Result Of The Array Is:\n");
    for(c=0;c<=n;c++)    
    printf("%d\n",array[c]);    
    return 0;
}
