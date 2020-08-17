#include<iostream>
#include<vector>
using namespace std;
class base
{
public:
    int a,b;
    void show()
    {
        cout<<a<<b<<endl;
    }
};
class derived: public base
{
public:
    int a,b;
    int x;
    void input()
    {
        cout<<"value of a and b\n";
        cin>>a>>b;
        cout<<"value of x\n";
        cin>>x;
        cout<<"value of a,b,x are\n";
        cout<<a<<b<<x<<endl;
    }
};
int main()
{
    base b1;
    derived d1;
    d1.input();
    b1=d1;
    b1.show();
}
