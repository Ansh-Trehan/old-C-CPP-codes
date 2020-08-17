#include<iostream>
#include<conio.h>
using namespace std;
class time1
{
    int hrs,mins;
public:
    time1()
    {

    }
    time1(int x)
    {
        hrs=x/60;
        mins=x%60;
    }
    void show()
    {
        cout<<"\n hrs"<<hrs;
        cout<<"\n mins"<<mins;
    }
};
int main()
{
    int duration=85;
    time1 t1;
    t1=duration;  //mandatory statement
    t1.show();
    getch();
}
