#include<iostream>
using namespace std;
#include<conio.h>
#include<vector>
int main()
{
    vector<int> v1(10);
    cout<<"size is\t"<<v1.size()<<"\n";
    for(int i=0;i<=9;i++)
    {
             
             v1[i]=i;
}
vector<int>:: iterator i=v1.begin();
i+=5;
v1.insert(i,10);
 for(int i=0;i<=10;i++)
    {
           cout<<v1[i]<<"\t";
}
getch();
}
