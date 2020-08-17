#include<iostream>
#include<conio.h>
using namespace std;
class book
{
    float cost;
    int bookid;
public:
    book()
    {
        cost=12.1;
        bookid=121;
    }
    book(float p, int q)
    {
        cost=p;
        bookid=q;
    }
    ~book(float p, int q)
    {
        cost=p;
        bookid=q;
    }


    void display()
    {
        cout<<cost<<endl;
        cout<<bookid<<endl;
    }
};
int main()
{
    book s;
    s.display();
    book s1(23.8,9);
    s1.display();
    getch();
}
