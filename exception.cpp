#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,div;
    cin>>a>>b;
    try
    {
        if(b!=0)
        {
            div=a/b;
            cout<<"result is "<<div;
        }
        else
            throw b;
    }
    catch (int x)
    {
        cout<<"exception occurred "ō;
    }
    getch();
}
