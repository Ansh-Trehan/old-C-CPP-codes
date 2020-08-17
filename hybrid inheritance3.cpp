#include<iostream>
#include<conio.h>
using namespace std;
class alpha
{
    int x;
public:
    alpha(int i)
    {
        x=i;
        cout<<"\nAlpha initialized";
    }
    void showx(void)
    {
        cout<<"x="<<x;
    }
};
class beta
{
    float y;
public:
    beta(float j)
    {
        y=j;
        vout<<"\nBeta initialized";
    }
};
class gamma:public beta,public alpha
{
    int m,n;
public:
    gamma(int a,float b,int c,int d)
};
