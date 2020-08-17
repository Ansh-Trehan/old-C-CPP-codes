#include<iostream>
#include<conio.h>
using namespace std;
class sr
{
public:
    void print()
    {
        cout<<"Ilu"<<endl;
    }
};
class rs
{
public:
    void print()
    {
        cout<<"Ifu"<<endl;
    }
};
class pc:public sr,public rs
{
public:
    void print()
    {
    cout<<"they love"<<endl;
    sr:print();
    rs::print();
    }
};
int main()
{
    pc o1;
    o1.print();
    getch();
}
