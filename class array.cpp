#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
        cout<<a[i]<<"--------"<<&a[i]<<"---------";
}
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
        cin>>a[i];
    for(int i=0;i<5;i++)
        cout<<a[i]<<"-----\n"<<&a[i];
}

