#include<iostream>
#include<conio.h>
using namespace std;
int area(int x)
{
    int ar;
    ar=x*x;
    cout<<ar<<endl;
}
int area(int x, int y)
{
    int ar;
    ar=x*y;
    cout<<ar;
}
int main()
{
 area(3);
     area(3,5);
    getch();
}
