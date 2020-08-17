#include<iostream>
#include<conio.h>
using namespace std;
class base
{
public:
    int b;
    void virtual show()
    {
    cout<<"base class\n";
    cout<<b;
    }
};
class derived: public base
{
public:
    int d;
    void show()
    {
        cout<<"derived class\n";
        cout<<b<<endl;
        cout<<d;
    }
};

int main()
{

    base *bptr;
    base b1;
    bptr=&b1;
}
