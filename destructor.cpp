#include<iostream>
#include<conio.h>
using namespace std;
int c=0;
class alpha
{
public:
    alpha()
    {
        c++;
        cout<<"Object created\n"<<c;
    }
    ~alpha()
    {
        cout<<"\nnumber of objects destroyed\n";
        c--;
    }
};
int main()
{
    cout<<"\nEnter main\n";
    alpha a1,a2,a3,a4;
    {
        cout<<"\nEnter block 1\n";
        alpha a5;
    }
    {
        cout<<"\nenter block 2\n";
        alpha a6;
    }
    cout<<"\nRe Enter name\n";
    return 0;
}
