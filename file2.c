#include<iostream>
#include<fstream>
using namespace std;
main()
{float cost;
ofstream fout("item.txt");
cout<<"enter cost";
cin>>cost;
fout<<cost;
fout.close();
ifstream fin("item.txt");
fin>>cost;
cout<<"details are";
cout<<cost;
fin.close();
}
