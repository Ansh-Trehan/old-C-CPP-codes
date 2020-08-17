#include<iostream>
#include<conio.h>
using namespace std;
float volume(float r,float h)
{
    float vol;
    vol=3.14*r*h;
    cout<<"Volume of cylinder "<<vol<<endl;
}
float volume(float r)
{
    float vol;
    vol=4/3*r*r*r*3.14;
    cout<<"Volume of sphere "<<vol<<endl;
}
int main()
{
    volume(4,5);
    volume(2);
    getch();
}
