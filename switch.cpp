#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int area,s,h,r,option;
    cout<<"Choose an option\n1.Area of circle.\n2.Area of Triangle.\n3.Area of square.";
    cin>>option;
    switch (option)
    {

        case 1: cout<<"Enter the radius.";
                cin>>r;
                area=r*r*3.14;
                cout<<"the area is"<<area;
                break;
        case 2: cout<<"Enter the side and height of triangle";
                cin>>s>>h;
                area=s*h*0.5;
                cout<<"the area is"<<area;
                break;
        case 3: cout<<"enter the side";
                cin>>s;
                area=s*s;
                cout<<"the area is"<<area;
                break;
        default: cout<<"invalid option.";

    }
    getch();
}
