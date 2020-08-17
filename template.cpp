#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
template <class t1,class t2>
class example
{
public:
    t1 *a;
    t2 b;
    example(t1 *x,t2 y)
    {
        a=x;
        b=y;
    }
    void input(t1 x,t1 y)
    {
        a=x;
        b=y;
    }
    void output()
    {
        cout<<"first value"<<a<<endl;
        cout<<"second value"<<b<<endl;
    }
};
    int main()
    {
        example<char ,float> ob(" mnb",3.5);
        ob.output();

        getch();
    }
