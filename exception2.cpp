#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Arrayindex
{
    char msg[30];
public:
    Arrayindex()
    {
        strcpy(msg,"\nArray index out of bound");
    }
    void getmessage()
    {
        cout<<msg;
    }
};
int main()
{
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    Arrayindex ar;
    try
    {
        for(int i=0;;i++)
        {
            if (i<0||i>9)
                throw ar;
            cout<<"\nElements";
            cout<<endl<<arr[i];
        }
    }
    catch (Arrayindex e)
    {
        e.getmessage();
    }
    getch();
}
