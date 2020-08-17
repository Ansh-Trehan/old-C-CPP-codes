#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class car
{
    public:
    int cost;
    char name[20];
    char mf[20];
    public:
        void getdata()
        {
           cout<<"Enter the name of the car";
            cin>>name;
            cout<<"Enter the cost";
            cin>>cost;

            cout<<"Enter the manufacturer";
            cin>>mf;
        }
        void displaydata();
};
void car::displaydata()
{
    cout<<"\nName is:\t"<<name;
    cout<<"\nCost:\t"<<cost;
    cout<<"\nManufacturer:\t"<<mf;
}
int main()
{
    car c[3];
    int m,loc;
    int i;
    for(i=0;i<3;i++)
    {
        c[i].getdata();
    }
    for(i=0;i<3;i++)
    {
        c[i].displaydata();
    }
    m=c[0].cost;
    for(i=0;i<3;i++)
    {
        if(c[i].cost>m)
        {

            c[i].cost=m;
            loc=i;
        }
    }
    cout<<"\nName of car having highest cost"<<c[loc].name;
    getch();
}
