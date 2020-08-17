#include<iostream>
#include<conio.h>
using namespace std;
//static variable
class abc
{
public:
    static int c;
    int number;
public:
    void input(int x)
    {
        number=x;
        c++;
        cout<<"\nvalue of number is"<<number;
    }
    static void write()
    {
        cout<<"\n value of c is"<<c;
        //number;
    }
};
int abc::c=10;
int main()
{
    abc m1,m2,m3;
    m1.input(20);
    abc::write();
    m2.input(30);
    m2.write();
    m3.input(35);
    m3.write();
    getch();
}
