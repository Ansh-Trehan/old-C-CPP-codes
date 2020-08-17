#include<iostream>
#include<conio.h>
using namespace std;

class faculty
{
    char name[20],dept[20];
    int uid;
    float sal;
    void input()
    {
        cout<<"enter the name,uid and salary per month,dept";
        cin<<name<<uid<<sal<<dept;
    }
    void calculation()
    {
        int days,ts;
        cout<<"enter the number of leaves";
        cin>>days;
        ts=sal-(days*(sal/30));

    }
    void output()
    {
        cout<<"Name:"<<name<<"\nuid:"<<uid<<"Dept:"<<dept<<"\nSalary:"<<ts;
    }
};
int main()
{
    f1.input();
    f1.calculation();
    f1.output();
    getch();

}
