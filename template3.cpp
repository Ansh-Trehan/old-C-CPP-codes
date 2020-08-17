#include<iostream>
#include<conio.h>
using namespace std;
template <class t1,class t2>
void display(t1 *x,t2 y)
{
    cout<<"hello "<<x<<endl;
    cout<<"bye "<<y;
}
int main()
{
    display("hihihi",121.454);
    getch();
}
