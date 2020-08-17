#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class book
{
public:
    int bookid;
    float cost;
    char name[20];
    void enter(char ch[20],int x, float y);
    void display();

};
void book::enter(char ch[20], int x, float y)
{
    strcpy(name,ch);
    bookid=x;
    cost=y;
}
void book::display()
{
    cout<<"name of book is"<<name;
    cout<<"\n bookid is"<<bookid;
    cout<<"\n cost is"<<cost;
}
int main()
{
    book b1,b2;
    b1.enter("C++",234,340.50);
    b1.display();
    b2.enter("book",34,199.99);
    b2.display();
    getch();
}
