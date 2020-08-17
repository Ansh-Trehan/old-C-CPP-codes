#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
main()
{
    vector <int> vec;
    int i;
    cout<<" vector size= "<<vec.size()<<endl;
    for (i=0;i<5;i++)
    {
        vec.push_back(i);
    }
     cout<<"extended vector size= "<<vec.size()<<endl;
     for(i=0;i<5;i++)
     {
         cout<<"value of vec ["<<i<<"] = "<<vec.[i]<<endl;
     }
     //use iterator to access th evalues
     vector<int> ::iterator v = vec.begin();
     while(v!=vec.end())
     {
         cout<<"value of v = " <<*v<<endl;
         v++;
     }
     getch();
}
