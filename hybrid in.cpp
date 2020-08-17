#include<iostream>
#include<conio.h>
using namespace std;
class student
{

public:
    char name[20];
    void studen()
    {
    cout<<"Enter name\n";
    cin>>name;
    }
};
class test:public virtual student
{

public:
    int t1;
    void tes()
    {
    cout<<name<<" scored :\n";
    cin>>t1;
    }
};
class sports
{

public:
      char sports[20];
    void sport()
    {
    cout<<"Enter name of the sport\n";
    cin>>sports;
    }

};
class result:public test,public sports
{
public:
    void display()
    {
        cout<<"name is "<<name<<"\n test marks is \n"<<t1<<"Sports play :"<<sports;
    }
};
int main()
{
    result r;
    r.studen();
    r.tes();
    r.sport();
    r.display();
    getch();

}
