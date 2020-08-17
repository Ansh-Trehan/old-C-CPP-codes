#include<iostream>
#include<conio.h>
using namespace std;
class point
{
    int x,y,z;
public:
    void get(int a,int b,int c);
    void display();
    void operator -()
    {
        x=x-1;
        y=y-1;
        z=z-1;
        x=x+2;
        y=y+2;
    }
};
void point::get(int a, int b,int c)
{
    x=a;
    y=b;
    z=c;
}
void point::display()
{
    cout<<"\nThe co-ordinates of P are"<<x<<","<<y<<","<<z;
    }
    int main()
    {
        point p;
        p.get(8,-9,-1);
        p.display();
        -p;
        p.display();
        getch();
    }
