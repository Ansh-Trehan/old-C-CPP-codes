#include<iostream>
#include<conio.h>
using namespace std;
class base
{
public:
    int a;
    void virtualshow()
    {
        cout<<"\nHello base class";
        cout<<a;
    }
};
class derived: public base
{
public:
    int b;
    void show()
    {
        cout<<"\nHello derived class";
        cout<<b;
    }
};
int main()
{
    base *ptr;
    base b1;
    ptr=&b1;
    ptr->a=100;
    *(ptr).show; //ptr->show()
    derived d1;
    ptr=&d1;
    d1.b=50;
    ptr->show();
    getch();
}
