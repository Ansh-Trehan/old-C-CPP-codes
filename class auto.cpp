#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class car
{
public:
    int engine,year;
    float chassis;
    char manuname[20],modelname[20],color[20];
    void input(char a[20], char b[20], char c[20], int x, int y, float z);
    void display();
};
void car::input(char a[20], char b[20], char c[20], int x, int y, float z)
{
    engine=x;
    year=y;
    chassis=z;
    strcpy(manuname,a);
    strcpy(modelname,b);
    strcpy(color,c);
}
void display()
{
    cout<<"Manufacturer name:"<<manuname;
    cout<<"Model name:"<<modelname;
    cout<<"Engine number:"<<modelname;
    cout<<"Chassis number:"<<chassis;
    cout<<"Year of Manufacturing:"<<manuname;
    cout<<"Color:"<<color;
}
int main()
{

    car c1;
    c1.
}
