#include<iostream>
using namespace std;
class sample
{
    int x,y;
public:
    sample()
    {

    }
    sample(int x1,int y1)
    {
        x=x1;
        y=y1;
    }
    sample(sample &s)
    {
        x=s.x;
        y=s.y;
    }
    void display()
    {
        cout<<x<<endl;
        cout<<y<<endl;
    }
};
int main()
{
    sample o1(10,15);
    sample o2=o1;
    cout<<"normal construct";
    o1.display();
    cout<<"copy constructor";
    o2.display();
    sample o3(o2);
    o3.display();
    sample o4;
    o4=o3;
    o4.display();

}
