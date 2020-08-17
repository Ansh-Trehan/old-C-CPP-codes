#include<iostream>
#include<conio.h>
#include<list>
using namespace std;
int main()
{
    //list container
    list <int> ls1;
    int arr[]={1,2,3,12};
    list <int> ls2(arr,arr+4);
    //list iterator

    list <int> ::iterator ls1Iter;
    //insert /push data into the list
    ls1.push_back(31);
    ls1.push_back(12);
    ls1.push_back(40);
    ls1.push_back(15);
    ls1.push_back(9);
    ls1.push_back(44);

    //print the data and do some operations
    cout<<"Before sorting , ls1 list data: ";
    for(ls1Iter=ls1.begin();ls1Iter!=ls1.end();ls1Iter++)
        cout<<" "<<*ls1Iter;
    cout<<endl;
    cout<<"\n operation: ls1.sort(); \n"<<endl;
    ls1.sort();
    ls2.sort();
    ls1.merge(ls2);
    cout<<"after sorting , ls1 list data: \n";
    for(ls1Iter=ls1.begin();ls1Iter!=ls1.end();ls1Iter++)
        cout<<" "<<*ls1Iter<<endl;

    getch();

}
