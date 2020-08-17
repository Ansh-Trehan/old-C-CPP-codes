#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
class initialist
{
    int data;
    float val;
public:
    initialist(int tdata ,float tval):data(tdata),val(tval)
    {
    }
    void display()
    {
        cout<<"\nData is "<<data<<"\nValue is "<<val;
    }
};
int main()
{
    initialist obj(2,4.2);
    obj.display();
    getch();
}
