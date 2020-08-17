#include<iostream>
#include<conio.h>
using namespace std;
class base
{
public:
    virtual ~base()
    {
        cout<<"base destructor called\n";
    }
};
class derived : public base
{
    ~derived()
    {
        cout<<"\nderive class destructor called\n";
    }
};
int main()
{
    base *bptr = new derived;
    delete bptr;
    getch();
}
