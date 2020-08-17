#include<iostream>
#include<string.h>
using namespace std;
class base
{
    protected:
char s[20];
public:
void virtual checkpalin();
};
class derived:public base
{
public:
void input(char t[])
{
strcpy(s,t);
}
void checkpalin()
{
char t[20];
int index=0;
for (int i=strlen(s)-1;i>=0;i--)
t[index++]=s[i];
t[index]='\0';
if(strcmp(s,t)==0)
cout<<"yes";
else
cout<<"no";
}
};
int main()
{
//base *ptr=new derived;
//ptr->input("aba");
derived o;
o.input("aba");
o.checkpalin();
//ptr->checkpalin();
}
