#include<iostream>
using namespace std;
class abc
{
    public:
    void show()
    {
        cout<<"X"<<endl;
    }
};
class sr:public abc
{
    public:
    void show1()
    {
        cout<<"Y"<<endl;
    }
};
class rs:public sr
{
public:
    void show2()
    {
        cout<<"Z"<<endl;
    }
};
int main()
{
    rs s1;
    s1.show();
    s1.show1();
    s1.show2();

}

