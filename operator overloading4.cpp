#include<iostream>
#include<conio.h>
using namespace std;
class integer
{
    int a,b;
public:
    void input()
    {
        cout<<"Value of a & b\n";
        cin>>a>>b;
    }
    void operator ==(integer i)
    {
        if(a==(i).a && b==(i).b)
            cout<<"Both are equal";
        else
            cout<<"Not equal";
    }
};
int main()
{
    integer i2,i3;
    i2.input();
    i3.input();
    i2==i3;
    getch();
}
