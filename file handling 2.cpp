#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
class abc
{
public:
    char ch2;
    void getdata()
    {
        fstream f1;
        f1.open("hi.txt",ios::in|ios::binary);
        while(f1.eof()==0)
        {
            f1.get(ch2);
            cout<<ch2;
        }
        f1.close();
    }
};
int main()
{
    abc ob;
    ob.getdata();
    getch();
}
