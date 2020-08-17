#include<iostream>
#include<conio.h>
using namespace std;
 class X
 {
     public:
     void showX()
     {
     cout<<"Class X";
     }
 };
class Y: public virtual X
{
public:
    void showY()
    {
        cout<<"Class Y";
    }
};
class W:public virtual X
{
public:
    void showW()
    {
        cout<<"Class W";
    }
};
class Z:public Y,public W
{
public:
    void showZ()
    {
        cout<<"Class Z";
    }
};
int main()
{
    Z z1;
    z1.showX();
    z1.showY();
    z1.showW();
    z1.showZ();
    getch();
}
