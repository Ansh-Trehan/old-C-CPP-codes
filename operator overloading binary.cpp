#include<iostream>
#include<conio.h>
using namespace std;
class abc
{
    int a;
public:
    abc (int x)
    {
        a=x;
    }
    abc()
    {

    }
    void operator -(abc o1);
};
void abc::operator -(abc o1)
{
    a=a+o1.a;
    cout<<a;
}
int main()
{
    abc a(10),y(30);
    a-y;
    getch();
}
