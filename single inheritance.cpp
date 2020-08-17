#include<iostream>
#include<conio.h>
using namespace std;
class employee
{
public:
    int id;
    float sal;
    char name[20];
    void input()
    {
    cout<<"enter the name, id & salary of the employee\n";
    cin>>name>>id>>sal;
    }
};
class msalary:public employee
{
      public:
      int bonus;
    float tax,tsal;
    void calculate()
    {

    tax=sal*0.1;
    if(sal>=12000)
    {
        bonus=2500;
    }
    else
        bonus=100;
    tsal=(sal-tax)+bonus;
    }
    void display()
{
    cout<<"\nName: "<<name<<"\nId: "<<id<<"\nSalary :"<<sal<<"\n\nTax: "<<tax<<"\nBonus: "<<bonus<<"\nTotal Salary: "<<tsal;
}
};
int main()
{
    msalary obj;
    obj.input();
    obj.calculate();
    obj.display();
    getch();
}
