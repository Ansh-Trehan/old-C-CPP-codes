#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5},pos,val,i;
    cout<<"Enter the position and value\n";
    cin>>pos>>val;
    for(i=5;i>pos;i--)
        a[i]=a[i-1];
    a[pos]=val;
    cout<<"enter  array is\n";
    for(i=0;i<5;i++)
        cout<<a[i]<<"\n";
    getch();
}
