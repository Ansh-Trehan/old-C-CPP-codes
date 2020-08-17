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
for(int i=10;i<=19;i++)
    {
           v1.push_back(i);
}
 cout<<"size is\t"<<v1.size()<<"\n";
 for(int i=0;i<=19;i++)
    {
           cout<<v1[i]<<"\t";
}
getch();
}
