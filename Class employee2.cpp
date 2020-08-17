#include<iostream>
#include<conio.h>
using namespace std;
class employee
{
private:
    char name[20];
    float sal;
    int id;
public:
    void input();
    void output();
};
void employee::input()
{
    cin>>name>>sal>>id;
}
void employee::output()
{
    cout<<name<<sal<<id;
}
int main()
{
    employee e1;
    e1.input();
    e1.output();
    getch();
}
