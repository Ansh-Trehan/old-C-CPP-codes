#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public:
    int reg,m1,m2,m3;
    char name[20];
    float fee;
public:
        void input()
    {
        cin>>reg>>name>>fee;
    }
    void calculate()
    {
        float a;
        cout<<"\nEnter marks";
        cin>>m1>>m2>>m3;
        int total;
        total=m1+m2+m3;
        a=total/3.0;
        cout<<"Percentage is"<<per;
    }
    void output()
    {
        cout<<"\nName:"<<name<<"\nReg.no.:"<<reg<<"\nfee:"<<fee;
    }
};
    int main()
    {
        student s1,s2;
        s1.input();
        s1.calculate();
        s1.output();
        s2.input();
        s2.calculate();
        s2.output();
        getch();

    }

