#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,res;
    char msg[20]="exception";
    cout<<"Enter two numbers";
    cin>>a>>b;
    try
    {
        res=a*b;
        if (res>10&& res<100)
        {
            throw res;
        }
        else if(res>100 && res<1000)
        {
            throw msg;
        }
        else if(res>1000)
        {
            throw 1003.00;
        }
    }
    catch(int x)
    {
        cout<<"Exception is result "<<x;
    }
    catch(char msg[20])
    {
        cout<<"\nThe result is "<<msg;
    }
    catch(...)
    {
        cout<<"\nHandle all types of exceptions";
    }
    getch();
}

