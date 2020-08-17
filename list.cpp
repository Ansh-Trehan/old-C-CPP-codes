#include<list>
#include<iostream>
#include<conio.h>
using namespace std;
int main(void)
{
    list<int> c1,c2,c3,c4;  //list containers
    c1.push_back(1);    //push/insert data
    c1.push_back(2);
    cout<<"\nThere first element is , c1.front():"<<c1.front();
    cout<<"\nThere last element is, c1.back():"<<c1.back();
    c1.pop_back();
    cout<<"\nAfter deleting the element at the end :"<<c1.back();
    c2.push_back(10);
    c2.push_back(3);
    cout<<"\nThe first element is, c2.front(: "<<c2.front();
    cout<<"\nThe second element is, c2.back(): "<<c2.back();
    c2.pop_front();
    cout<<"\nAfter deleting th element at the beginning "<<c2.front();
    c3.push_back(5);
    if(c3.size()!=0)
        cout<<"\nc3.push_back(5) - The last element , c3.base() :"c3.back();
        c4.push_front(7);
    if(c4.size()!-0)
        cout<<"\nc4.push_front(7) - The first element, c4.front() :"c4.front();
        c4.push_front(8);


}

