#include<iostream>
#include<conio.h>
using namespace std;
void numprint(int);
void numprint(int ,int);
int main()
{
    int ub,lb;
    cout<<"\nEnter lower limit and upper limit";
    cin>>lb>>ub;
    numprint(lb);
    numprint(lb,ub);
    getch();
}
void numprint(int a)
{
    int i;
    cout<<"\nList of even number from 1 is\n";
    for (i=1;i<=a;i++)
        if(i%2==0)
        cout<<i<<endl;
}
void numprint(int a,int b)
{
    int i;
    for(i=a;i<=b;i++)
        if (i%2!=0)
        cout<<i<<endl;
}
