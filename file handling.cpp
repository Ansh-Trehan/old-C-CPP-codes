#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{

    ofstream outf("Employee.txt");
    char name[20];
    cout<<"enter the name\n";
    cin>>name;
    outf<<name<<"/n";
    int id;
    cout<<"enter the id"<<endl;
    cin>>id;
    outf<<id<<"\n";
    outf.close();
    ifstream inf("employee.txt");
    inf>>name;
    inf>>id;
    cout<<"employee name"<<name<<"\n";
    cout<<"id"<<id<<"\n";
    inf.close();
    getch();
}
