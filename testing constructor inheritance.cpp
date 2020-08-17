#include<iostream>
#include<conio.h>
using namespace std;
class a
{
public:
    int c;
    a(int a, int b)
    {

        c=a+b;
        cout<<c;
    }
};
class b:public a
{
public:
    int f;
    b(int d,int e)
    {

      f=d+e;
      cout<<f;
    }
};
class c:public b
{
public:
    int y;
    c(int r,int t)
    {
        y=r+t;
        cout<<t;
    }
};
int main()
{
    c ob;
    a(2,3);
    b(3,4);
    c(3,4);
    getch();

}
