#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[5];
    int s;
    for(int i=0;i<5;i++)
        cin>>a[i];
    cout<<"enter element to be searched";
    cin>>s;
    for(int i=0;i<5;i++)
    {
        if(a[i]==s)
            break;
        if(i!=5)
            cout<<"found\n";
            else
            cout<<"not found";
    }
    getch();
}
