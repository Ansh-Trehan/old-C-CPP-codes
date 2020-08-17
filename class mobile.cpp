#include<iostream>
#include<conio.h>
using namespace std;
class mobile
{
public:
    char manufacturer[20];
    char model[20];
    char color[20];
    int yr,nofsim;
public:
    void input()
    {
        cout<<"enter the Model of the phone:";
        cin>>model;
        cout<<"enter the manufacturer:";
        cin>>manufacturer;
        cout<<"enter the year of purchase:";
        cin>>yr;
        cout<<"enter number of sims:";
        cin>>nofsim;
    }
    void display()
    {
        cout<<"Model"<<model<<"of color"<<color<<"of "<<manufacturer<<"is bought in the year\n"<<yr;

    }
    void IsSinlgeSim()
    {
        if(nofsim==1)
        cout<<"\nThe phone is single Sim.";
        else if(nofsim=2)
        cout<<"\nThe phone is dual Sim.";
        else cout<<"\nThe phone is Multisim.";

            }
};
int main()
{
    mobile m1,m2;
    m1.input();
    m1.display();
    m2.input();
    m2.display();
    getch();
    }
