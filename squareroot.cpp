#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int i , number ;
	printf("ENTER THE VALUE OF N") ;
	scanf("%d",&number) ;
	printf("\n-----------------------------------------------------------------");
    i=1;
    do
	{
		printf("\n I \t  %d \t  I \t %d \t I \t  %d \t I", i ,i*i,i*i*i);
		i++ ;
	}
	while(i<=number);
	printf("\n------------------------------------------------------------------");
	return 0 ;
}
