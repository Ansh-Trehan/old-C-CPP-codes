#include<iostream>
#include<conio.h>
using namespace std;
class A
{
public:
    int x;
private:
    void input()
    {
        cin>>x;
    }
    void output()
    {
        cout<<x;
    }
};
void show()
{
    A obj;
    obj.input();
    obj.output();
}
int main()
{

    A obj2;
    obj2.input();
    obj2.output();
    getch();
}
