#include<iostream>
#include<list>
#include<conio.h>
using namespace std;
int main(void)
{
    list <char> elem; //list container for character
    char chs;
    cout<<"elem list is: ";
    for (chs='a';chs<='z';chs++)
        elem.push_back(chs);
    while(!elem.empty())
    {
        cout<<elem.front()<<' ';
        elem.pop_front();
    }
    cout<<endl;
    getch();
}
