#include<stdio.h>
#include<conio.h>
main()
 {
    int *arr,num,i;
    printf("Enter The Number Of Elements :");
    scanf("%d",&num);
    arr=(int *)malloc(num*2);
    printf("Enter The numbers :");
    for(i=0;i<num;i++) scanf("%d",(arr+i));
    printf("nPositive Numbers Are....n");
    for(i=0;i<num;i++) if(arr[i]>0) printf(" %d",arr[i]);
    printf("nNegative Numbers Are....n");
    for(i=0;i<num;i++) if(arr[i]<0) printf(" %d",arr[i]);
    getch();
 } 
