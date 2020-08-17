#include<iostream>
#include<conio.h>
using namespace std;
int operate(int x, int y)
{
    return (x*y);
}
double operate(double x, double y)
{
    return (x/y);
}
int main()
{
    int a=8, b=2;
    float n=6, m=3;
    cout<<operate(a,b)<<endl;
    cout<<operate(n,m)<<endl;
    getch();
}
