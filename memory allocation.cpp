#include<iostream>
#include<conio.h>
using namespace std;
class fact
{
public:
    int *num=new int;
    int facto;
    fact ( int n)
    {
        facto=1;
        *num=n;
    }
    int fac()
    {
        int i=1;
        while(i<=*num)
        {
            facto*=i;
            i++;
        }
        return facto;
    }
};
int main()
{
    int n;
    cout<<"enter  num: ";
    cin>>n;
    fact s(n);
    int res=s.fac();
    cout<<res;
}
