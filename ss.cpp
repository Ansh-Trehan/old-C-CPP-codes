#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{

string s="good";
string s1="morning";
string s2="hi";
cout<<s<<" "<<s2;
string z=s+s1;
string s5="new";
string s6="mathematics";
string s7=s5+s6;
cout<<endl<<z.replace(2,4,s5);
cout<<endl<<z.replace(2,4,"card");
cout<<endl<<z.substr(2,4);
s.clear();
cout<<endl<<"s is"<<s<<endl;
getch();
return 0;}
