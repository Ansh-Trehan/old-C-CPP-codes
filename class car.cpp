#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class car
{
    public:
    int cost,year;
    int finalcost;
    char name[20];
    void input(char ch[20], int x,int y);
    void totalcost();
    void display();
};
void car::input(char ch[20],int x, int y)
{
    strcpy(name,ch);
    cost=x;
    year=y;
}
void car::totalcost()
{
    if (year<=2108)
       finalcost=(cost-25000);
    else
    finalcost=cost;
}
void car::display()
{
    cout<<"\nCar:"<<name;
    cout<<"\nCost:"<<cost;
    cout<<"\nYear of manufacturing:"<<year;
    cout<<"\nTotal cost:"<<finalcost;

}
int main()
{

    car c1,c2;
    c1.input("Nano",300000,2108);
    c1.totalcost();
    c1.display();
    c2.input("Lamborghini",300000000,2015);
    c2.totalcost();
    c2.display();
    getch();

}
