#include<iostream>
#include<conio.h>
using namespace std;
class abc
{
    int a;
public:
    abc()
    {

    }
    abc(int x)
    {
        a=x;
    }
    void show()
    {
        cout<<a;
    }
};
int main()
{
    abc obj;
    int var=100;
    obj=var;
    obj.show();
    getch();
}
