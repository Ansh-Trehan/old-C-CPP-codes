#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class book
{
public:
    int pages,cost,libid;
    char name[20],author[20];
public:
    void input()
    {
        cout<<"Enter the name of the book: ";
        cin>>name;
        cout<<"\nEnter the name of the author: ";
        cin>>author;
        cout<<"\nEnter the number of pages: ";
        cin>>pages;
        cout<<"\nEnter the library Id: ";
        cin>>libid;
    }
    void display()
    {
        cout<<"\nBook: \t"<<name;
        cout<<"\nAuthor: \t"<<author;
        cout<<"\nPages: \t"<<pages;
        cout<<"\nLib. Id:\t"<<libid;
    }
};
int main()
{
    book b[4];
    int lib,i,loc;
    for(i=0;i<4;i++)
    {
        b[i].input();
    }
    for(i=0;i<4;i++)
    {
        b[i].display();
    }
    lib=b[0].libid;
    for(i=0;i<4;i++)
    {
        if (b[i]libid=lib)
        {
            b[i].libid=lib;
            loc=i;
        }
    }
    cout<<"\nThe book is: "<<b[loc].name;
    getch();
}
