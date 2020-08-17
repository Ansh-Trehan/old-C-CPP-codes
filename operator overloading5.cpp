#include<iostream>
#include<conio.h>
using namespace std;
class distance
{
private:
    int feet;
    int inches;
public:
    distance()
    {
        feet=0;
        inches=0;
    }
    distance(int f,int i)
    {
        feet=f;
        inches=i;
    }
    void operator =(distance &D)
    {
        feet=D.feet;
        inches=D.inches;
    }
    void displaydist()
    {
        cout<<"Feet : "<<feet<<"Inches : "<<inches;
    }
};
int main()
{
    distance D1(11,10):D2(5,11);
    cout<<"First Distance";
    D1.displaydist();
    cout<<"Second distance";
    D2.displaydist();
    D1.operator=(d2);
    cout<<"First Distance";
    D1.displaydist();
    getch();
}
