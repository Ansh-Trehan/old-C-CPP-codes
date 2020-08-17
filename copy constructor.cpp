#include<iostream>
#include<conio.h>
using namespace std;
class abc
{
private:
    int a,b;
public:
    abc()
    {

    }
    abc(int x, int y)
    {
        a=x;
        b=y;
    }
    abc(abc &m) //copy cons
    {
        a=m.a;
        b=m.b;
    }
    void write()
    {
        cout<<a<<endl<<b<<endl<<"\n";
    }

};
int main()
{
    abc m1(20,50);
    m1.write();
    abc m2=m1;
    m2.write();
    abc m3(m2);
    m3.write();
    abc m4;
    m4=m3;
    m4.write();
    getch();
}
//destructor is left
