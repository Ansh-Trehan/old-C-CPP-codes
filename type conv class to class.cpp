#include<iostream>
#include<conio.h>
#define dol_val 44.20
using namespace std;
class rupee //destination class
{
    double rs;
public:
    rupee(double rs1)
    {
        rs=rs1;
    }
    void show()
    {
        cout<<"\n money is"<<rs;
    }
    rupee()
    {
        rs=0;
    }
};
class dollar //source class
{
    double d;
public:
    dollar(double dol1)
    {
        d=dol1;
    }
    operator rupee() //conversion fn
    {
        double rs1=d*dol_val;
        return(rupee(rs1));
    }
    void show()
    {
        cout<<"Money in dollar="<<d;
    }

};
int main()
{
    dollar d1(1);
    d1.show();
    rupee r1;
    r1=d1;
    r1.show();
    getch();
    return 0;
}
