#include<iostream>
#include<conio.h>
using namespace std;
class rollno
{
public:
    int x;
    void input();
    void display();
    void output()
    {
        cout<<"\nThe next roll number is\t"<<x;
    }
    void operator++()
    {
        x++;
    }
};
void rollno::input()
{
    cout<<"\nEnter the roll no.\t";
    cin>>x;
}
void rollno::display()
{
    cout<<"\n\nThe roll number are\t"<<x;
}
int main()
{
    rollno r;
    r.input();
    r.display();
    ++r;
    r.output();
    ++r;
    r.output();
    getch();
}
