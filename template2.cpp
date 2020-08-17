#include<iostream>
#include<conio.h>
using namespace std;
template <class t1>
class great
{
public:
    t1 a,b,c;
    void input(t1 x,t1 y, t1 z)
    {
        x=a;
        y=b;
        z=c;
    }
    void cal()
    {
        cout<<a+b+c;
    }
};
int main()
{
    great<int> o;
    o.input(5,4,7);
    o.cal();
   getch();
}

