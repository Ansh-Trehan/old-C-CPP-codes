#include<iostream>
#include<conio.h>
using namespace std;
class thisp
{
    int a;
public:
    thisp(){}
    thisp(int b)
    {a=b;}
    thisp greater(thisp &p);
    void display();
};
thisp thisp::greater(thisp &p)
{
    if(this->a<p.a)
        return p;
        else
            return *this;
}
void thisp::display()
{
    cout<<"\nValue is"<<a;
}
int main()
{
    thisp p1(4),p2(2),p3;
    p3=p1.greater(p2);
    p3.display();
    getch();
}
