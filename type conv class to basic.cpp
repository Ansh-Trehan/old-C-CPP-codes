#include<iostream>
#include<conio.h>
using namespace std;
class add
{
    int a,b;
public:
    void input()
    {

        cout<<"\nEnter a and b";
        cin>>a,b;
    }
    operator double()
    {
        double sum=0.0;
        sum=a+b;
        return sum;
    }
};
int main()
{
    add a;
    double c;
    c=a;
    getch();
}
