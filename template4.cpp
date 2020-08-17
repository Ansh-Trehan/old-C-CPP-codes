#include<iostream>
#include<conio.h>
using namespace std;
template <class t>
countocc(t arr[],t val,int siz)
{
    int i,c=0;
    for(i=0;i<siz;i++)
    {
        if(val==arr[i])
            c++;
    }
    cout<<c<<endl;
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    char arr1[]={'a','b','c','d','e','f'};
    countocc(arr,4,6);
    countocc(arr1,'d',8);
    getch();
}
