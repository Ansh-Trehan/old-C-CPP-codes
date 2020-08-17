#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class employee
{
public:
    char name[20],status[20];
    int age,exp;
public:
    void input()
    {
        cout<<"Enter the name of employee";
        cin>>name;
        cout<<"Enter the age and status of employee:";
        cin>>age>>status;
        cout<<"Enter the experience of working:";
        cin>>exp;
    }
    void display()
    {

    }

};
