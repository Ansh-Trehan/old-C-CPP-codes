#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public:
    int regno;
    char name[20];
    void displayS()
    {
        cout<<"Enter the Name and Reg No.\n";
        cin>>name>>regno;
    }
};
class test:virtual public student
{
public:
    int m1,m2,m3;
    void displayT()
    {
        cout<<"Enter the marks of Eng, Hindi, Math\n";
        cin>>m1>>m2>>m3;
    }
};
class sports:virtual public student
{
public:
    int score;
    void displaySp()
    {
        cout<<"Enter the score of sports\n";
        cin>>score;
    }
};
class result: public test,public sports
{
public:
    int tresult;
    void displayR()
    {
    cout<<"\nName: \t"<<name<<"\nReg. No: \t"<<regno<<"\nMarks of Subjects: \t"<<m1<<", "<<m2<<", "<<m3;
    cout<<"\nSports Score is: "<<score;
    tresult=(m1+m2+m3+score)/4;
    cout<<"\nThe total Average Result: \t"<<tresult;
    }
};
int main()
{
    result r;
    r.displayS();
    r.displayT();
    r.displaySp();
    r.displayR();
    getch();
}
